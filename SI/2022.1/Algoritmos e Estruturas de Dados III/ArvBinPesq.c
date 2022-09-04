#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*
   Codigo implementado pelo Prof. Wellington Lima dos Santos, para fins 
   didaticos, no ambito da disciplina Algoritmos e Estruturas de Dados III, 
   do Cursos de Sistemas de Informacao e Engenharia da Computacao (UFGD).

   Buscou-se implementar um codigo enxuto que contivesse algumas das
   funcoes mais usuais relacionadas com arvores binarias de pesquisa.

   Dourados, fevereiro de 2016.
*/

typedef struct NodoAB * ArvBin;

typedef struct NodoAB
{
    char chave;
    ArvBin E;
    ArvBin D;
} NodoAB;

ArvBin criaNodo(char chave);
void destroiArvBin(ArvBin * t);
int insere(ArvBin * t, char x);
int pesquisa(ArvBin t, char x, ArvBin * n);
ArvBin antecessor(ArvBin * x);
int exclui(ArvBin * t, char k);
ArvBin sucessor(ArvBin* x);
void  preOrdem(ArvBin t);
void  inOrdem(ArvBin t);
void  posOrdem(ArvBin t);
int numNodos(ArvBin t);
int altura(ArvBin t);
void mostraParentesesAninhados(ArvBin t);
void mostraInfoExtras(ArvBin t);
void mostraArvBin(ArvBin t, int nivel);
int rotEsq(ArvBin * N);
int rotDir(ArvBin * N);
int giraNodo(ArvBin * t, int x, int sent);
char opcao(char *op);
ArvBin CriaArvBinInicial(char * palavra);

int main()
{
    char c, op;
    ArvBin t = NULL;
    //t = CriaArvBinInicial("MARAVILHA");
    printf(">>>>>>>>>>>>>>>>>> Arvore Binaria de pesquisa <<<<<<<<<<<<<<<<<<<\n\n");
    do
    {
        if (t)
        {
            printf("\n\n---------- Representacao Identada da ARVORE ----------\n");
            mostraArvBin(t, 0);
            printf("------------------------------------------------------\n");
            mostraInfoExtras(t);
            printf(  "------------------------------------------------------\n");
        }
        c = opcao(&op);
        printf("\n");
        if (c == '0' || c == 27)
            break;
        switch (op)
        {
        case '+' :
            if (!insere(&t, c))
            {
                printf("\n A chave %c ja existe! Pressione qualquer tecla", c);
                getch();
            }
            break;
        case '-' :
            exclui(&t, c);
            break;
        case '?' :
            printf("\nImplemente, pois a funcao pesquisa ja' esta' pronta!");
            getch();
            break;

        case '/' :
            giraNodo(&t, c, -1);
            break;
        case '\\' :
            giraNodo(&t, c, 1);
            break;
        }
    }
    while ( c != '0');
    destroiArvBin(&t);
    return 0;
}

char upch(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a'-'A');
    else
        return c;
}

ArvBin criaNodo(char chave)
{
    ArvBin N;
    N = (ArvBin) malloc(sizeof(*N));
    N->chave = chave;
    N->E = NULL;
    N->D = NULL;
    return N;
}

void destroiArvBin(ArvBin * t)
{
    if (*t)
    {
        destroiArvBin(&(*t)->E);
        destroiArvBin(&(*t)->D);
        free(*t);
        *t = NULL;
    }
}

int insere(ArvBin * t, char x)
{
    ArvBin r;
    r = *t;
    if (r != NULL)
    {
        if (x < r->chave)
            return insere(&r->E, x);
        else if (x == r->chave)
            return 0;
        else
            return insere(&r->D, x);
    }
    else
    {
        r = criaNodo(x);
        *t = r;
        return 1;
    }
}

int pesquisa(ArvBin t, char x, ArvBin * n)
{
    if (t != NULL)
    {
        if (x == t->chave)
        {
            *n = t;
            return 1;
        }
        else if (x < t->chave)
            return pesquisa(t->E, x, n);
        else
            return pesquisa(t->D, x, n);
    }
    else
        return 0;
}

//retorna o nodo mais a direita da sub-arvore de x;
//retorna em x a sub-arvore esquerda deste nodo mais a direita
ArvBin antecessor(ArvBin * x)
{
    ArvBin r;
    if ((*x)->D == NULL)  //x e o nodo mais a direita
    {
        r = *x;
        *x = (*x)->E;
        return r;
    }
    else  //desce mais um nivel, pela direita
        return antecessor(&((*x)->D));
}

//retorna 1 se o nodo for excluido, para o que basta que a chave exista
int exclui(ArvBin * t, char k)
{
    ArvBin N;
    if ((*t) == NULL)           //Abandona sem fazer nada
        return 0;
    if (k == (*t)->chave)       //chave encontrada!
    {
        N = (*t);
        if ((*t)->E == NULL)      //t pode ter apenas a sub-arvore direita
            *t = (*t)->D;
        else if ((*t)->D == NULL)   //t tem apenas a sub-arvore esquerda
            (*t) = (*t)->E;
        else                    //t tem as duas sub-arvores
        {
            N = antecessor(&((*t)->E)); //acha o nodo mais a direita em (*t)->E
            (*t)->chave = N->chave;     //substitui o conteudo de t pelo de N
        }
        free(N);              //libera os recursos alocados para N
        return 1;
    }
    else if ( k < (*t)->chave )
        return exclui(&((*t)->E), k);
    else
        return exclui(&((*t)->D), k);
}

ArvBin sucessor(ArvBin* x)
{
    ArvBin r;

    if((*x)->E == NULL)  //x e o nodo mais a esquerda
    {
        r = *x;
        *x = (*x)->D;
        return r;
    }
    else  //desce mais um nivel, pela esquerda
        return sucessor(&((*x)->E));

}

void  preOrdem(ArvBin t)
{
    if (t != NULL)
    {
        preOrdem(t->E);
        preOrdem(t->D);
        printf("%c ", t->chave);
    }
}

void  inOrdem(ArvBin t)
{
    if (t != NULL)
    {
        inOrdem(t->E);
        printf("%c ", t->chave);
        inOrdem(t->D);
    }
}

void  posOrdem(ArvBin t)
{
    if (t != NULL)
    {
        posOrdem(t->E);
        posOrdem(t->D);
        printf("%c ", t->chave);
    }
}


//Retorna o numero de nodos de "t"
int numNodos(ArvBin t)
{
    if (t != NULL)
        return 1 + numNodos(t->E) + numNodos(t->D);
    else
        return 0;
}

//Retorna a altura de "t"
int altura(ArvBin t)
{
    int he, hd;
    if (t != NULL)
    {
        he = altura(t->E);
        hd = altura(t->D);
        if (he > hd)
            return 1 + he;
        else return 1 + hd;
    }
    else
        return 0;
}

void mostraParentesesAninhados(ArvBin t)
{
    if (t != NULL)
    {
        printf("%c", t->chave);
        if (t->E != NULL || t->D != NULL)
        {
            printf("(");
            mostraParentesesAninhados(t->E);
            if (t->D != NULL)
              printf(",");
            mostraParentesesAninhados(t->D);
            printf(")");
        }
    }

}


void mostraInfoExtras(ArvBin t)
{
    printf("Numero de nodos.....................: %d \n", numNodos(t));
    printf("Altura da arvore....................: %d \n", altura(t));
    printf("Arvore como parenteses aninhados....: ");
    mostraParentesesAninhados(t);
    printf("\nPercurso em pre-ordem...............: ");
    preOrdem(t);
    printf("\nPercurso em ordem...................: ");
    inOrdem(t);
    printf("\nPercurso em pos-ordem...............: ");
    posOrdem(t);
    printf("\n");

}

void mostraArvBin(ArvBin t, int nivel)
{
    int i;
    if (t == NULL)
        return;
    for (i=0; i<nivel; i++)
        printf("   ");   //numero de espacos de identacao
    printf("%c\n", t->chave);
    mostraArvBin(t->E, nivel+1);
    mostraArvBin(t->D, nivel+1);
}


//rotaciona "N" para a esquerda (sentido anti-horario)
int rotEsq(ArvBin * N)
{
    ArvBin F;
    if (N && (*N)->D)
    {
        F = (*N)->D;
        (*N)->D = F->E;
        F->E = (*N);
        (*N) = F;
        return 1;
    }
    return 0;
}

//rotaciona "N" para a direita (sentido horario)
int rotDir(ArvBin * N)
{
    ArvBin F;
    if (N && (*N)->E)
    {
        F = (*N)->E;
        (*N)->E = F->D;
        F->D = (*N);
        (*N) = F;
        return 1;
    }
    return 0;
}

//t= raiz; x = chave; sent > 0 (Rot Esquerda), sent <= 0 (Rot Direita)
int giraNodo(ArvBin * t, int x, int sent)
{
    if (*t != NULL)
    {
        if (x == (*t)->chave)
        {
            if (sent > 0)
                return rotEsq(&(*t));
            else
                return rotDir(&(*t));
        }
        else if (x < (*t)->chave)
            return giraNodo(&(*t)->E, x, sent);
        else
            return giraNodo(&(*t)->D, x, sent);
    }
    else
        return 0;
}

char opcao(char *op)
{
    char c;
    printf("\nConsiderando 'c' um caracter (A, B,...,Z), digite umas das opcoes:");
    printf("\n     c : insere c");
    printf("\n    -c : Exclui c");
    printf("\n    ?c : Pesquisa c");
    printf("\n    /c : Gira c para direita  (horario)");
    printf("\n    \\c : Gira c para esquerda (anti-horario)");
    printf("\n   Esc : Finaliza o programa\n\n");
    printf("\n --> ");

    *op = '+'; //opcao padrao: inserir
    while (1)
    {
        c = getch();
        if (c == 27)
            break;
        c = upch(c);
        if (c >= 'A' && c <= 'Z' || strchr("+-?/\\", c))
        {
            printf("%c", c);
            break;
        }
    }
    if (strchr("+-?/\\", c))
    {
        *op = c;
        while (1)
        {
            c = getch();
            if (c == 27)
                break;
            c = upch(c);
            if (c >= 'A' && c <= 'Z')
            {
                printf("%c", c);
                break;
            }
        }
    }
    return c;
}

//Cria uma arvore a partir dos caracteres de uma palavra
//Finalidade: acelerar o teste de outras funcoes, ja que
//o programa pode comecar com uma arvore inicial pronta.
ArvBin CriaArvBinInicial(char * palavra)
{
    int n, i;
    ArvBin t = NULL;
    n = strlen(palavra);
    for (i=0; i<n; i++)
        insere(&t, palavra[i]);
    return t;
}