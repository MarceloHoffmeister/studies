#include <stdio.h>
#include <stdlib.h>

typedef struct TNodo* ArvBin;

typedef struct TNodo{
   int chave;
   int h, fb, q; //usados nos exercicios 11, 12 e 20
   ArvBin pai;   //usado no exercicio 24;
   int x, y;     //usado para desenhar a arvore
   ArvBin E;
   ArvBin D;
   //outros campos, conforme a necessidade
} TNodo;

/* PROTOTIPOS DAS FUNCOES IMPLEMENTADAS */

ArvBin criaNodo(int chave);
void destroiArvBin(ArvBin *t);

/* PERCURSOS */
void preOrdem(ArvBin t);
void inOrdem(ArvBin t);
void  posOrdem(ArvBin t);

/* CRIACAO AUTOMATICA/SIMPLIFICADA */
ArvBin str_tree(char *s); //Parentes aninhados => arvore binaria QUALQUER  
int vetor_ArvBin(ArvBin * t, int chaves[], int n); //vetor => ABP

/* INSERCAO E PESQUISA */
int insereABP(ArvBin * t, int chave); //insercao em APB
ArvBin pesquisaABP(ArvBin t, int chave); //pesquisa numa ABP (Ordenada)
ArvBin pesquisaAB(ArvBin t, int chave);  //pesquisa numa arvore binaria QUALQUER

/* REPRESENTACOES */
void indenta_ArvBin(ArvBin t, int nivel); //mostra a representacao INDENTADA
void lista_ArvBin(ArvBin t); //mostra a representacao de PARENTENSES ANINHADOS 
void drawTree(ArvBin t);   //mostra a representacao PADRAO (grafos) 

ArvBin criaNodo(int chave){
    ArvBin N;
    N = (ArvBin) malloc(sizeof(*N));
    N->chave = chave;
    N->E = NULL;
    N->D = NULL;
    return N;
}

void destroiArvBin(ArvBin *t){
    if (*t)  {
        destroiArvBin(&(*t)->E);
        destroiArvBin(&(*t)->D);
        free(*t);
        *t = NULL;
    }
}

void preOrdem(ArvBin t){
    if (t) {
        preOrdem(t->E);
        preOrdem(t->D);
        printf("%d ", t->chave);
    }
}

void inOrdem(ArvBin t){
    if (t){
        inOrdem(t->E);
        printf("%d ", t->chave);
        inOrdem(t->D);
    }
}

void  posOrdem(ArvBin t){
    if (t){
        posOrdem(t->E);
        posOrdem(t->D);
        printf("%d ", t->chave);
    }
}

ArvBin tree(char **str) {
//funcao auxiliar chamada em "str_tree" 
    char *s = *str;
    ArvBin t = NULL;
    int k = 0;
    if (!s || *s == ',' || *s == ')')
        return NULL;
    while  (s && *s && *s != '(' && *s != ')' && *s != ',') {
        if (*s >= '0' && *s <= '9')
             k = 10 * k + *s - '0';
       s++;
    }
    t = criaNodo(k);
    if (*s == '(') {
       s++;
       t->E = tree(&s);
       if (*s == ','){
           s++;
           t->D = tree(&s);
       }
       if (*s == ')')
           s++;
       else
           printf("ERRO: faltou ')'");                          
   }    
   *str = s;
   return t;    
}   

ArvBin str_tree(char *s) {
//retorna uma arvore a partir da sua representacao em forma de parenteses aninhados
//Exemplos: "1", "1(2,3)", "1(,2)", "1(2(3,4),5))"
   return tree(&s);
}

int insereABP(ArvBin * t, int chave){
//tenta inserir "chave" na Arvore Binaria de Pesquisa (Arvore Ordenada) "t"
    ArvBin r;
    r = *t;
    if (r) { //mesmo que (r != NULL)
        if (chave < r->chave)
            return insereABP(&r->E, chave);
        else
            if (chave == r->chave)
                return 0;
            else
                return insereABP(&r->D, chave);
    }
    else  {
        r = criaNodo(chave);
        *t = r;
        return 1;
    }
}

ArvBin pesquisaAB(ArvBin t, int chave) {
//pesquisa "chave" numa arvore binaria qualquer "t"    
    ArvBin u;
    if (!t)
        return NULL;
    if (chave == t->chave)
        return t;
    u = pesquisaAB(t->E, chave);
    if (u)
        return u;
    return pesquisaAB(t->D, chave);
}

ArvBin pesquisaABP(ArvBin t, int chave) {
//pesquisa "chave" numa arvore binaria de pesquisa "t"    
    if (!t)
        return NULL;
    if (chave == t->chave)
        return t;
    if (chave < t->chave)
        return pesquisaABP(t->E, chave);
    return pesquisaABP(t->D, chave);
}

int vetor_ArvBin(ArvBin * t, int chaves[], int n) {
//insere os elementos dum vetor numa ABP e retorna o numero de insercoes bem sucedidas
    int i, cnt = 0;
    for (i = 0; i < n; i++)
        if (insereABP(t, chaves[i]))
            cnt++;
    return cnt;
}

void indenta_ArvBin(ArvBin t, int nivel){
//exibe a representacao indentada de "t"; "nivel" deve ser zero na 1a chamada
    int i;
    if (!t) //(t == NULL)
        return;
    for (i=0; i<nivel; i++)
        printf("   ");   //numero de espacos de indentacao
    printf("%d\n", t->chave);
    indenta_ArvBin(t->E, nivel+1);
    indenta_ArvBin(t->D, nivel+1);
}

void lista_ArvBin(ArvBin t){
//exibe a representacao na forma de parenteses aninhados
    if (t) {
        printf("%d", t->chave);
        if (t->E || t->D) {
            printf("(");
            lista_ArvBin(t->E);
            if (t->D)
              printf(",");
            lista_ArvBin(t->D);
            printf(")");
        }
    }
}

//estruturas e funcoes usadas pela funcao "drawTree"
#define MAXCOLS 60  //numero de colunas da tela virtual
#define MAXROWS 20  //numero de linhas da tela virtual

typedef struct {
    char scr[MAXROWS][MAXCOLS+1]; //tela virtual
    int ll, cc; //linha e coluna atuais na tela virtual
    int ymax;   //ultima linha de desenho
} * virtScr;

void gotoxy(virtScr scr, int x, int y) {
    scr->cc = x;
    scr->ll = y;
}

void printChar(virtScr scr, char c) {
    if (scr->ll >= 0 && scr->ll < MAXROWS && scr->cc >= 0 && scr->cc < MAXCOLS)
       scr->scr[scr->ll][scr->cc++] = c;
}

void printInt(virtScr scr, int n) {
    char s[10], *t = s;
    do {
       *t++ = n % 10 + '0';
       n = n / 10;
    } while (n > 0);
    while (--t >= s)
        printChar(scr, *t);
}

void printLn(virtScr scr, int x1, int x2, int y) {
    gotoxy(scr, x1, y);
    while (x1++ <= x2)
        printChar(scr, (char)0xc4);
}

void setPos(ArvBin t, int lev, int * x, int * ymax) {
    if (!t)
        return;
    setPos(t->E, lev+1, x, ymax);
    t->x = *x;
    t->y = 1 + 2 * lev;
    *x += 3;
    *ymax = t->y > *ymax ? t->y : *ymax;
    setPos(t->D, lev+1, x, ymax);
}

void draw(ArvBin t, virtScr scr) {
    if (!t)
        return;
    gotoxy(scr, t->x, t->y);
    printInt(scr, t->chave);
    if (!t->E && !t->D) //folha
        return;
    gotoxy(scr, t->x, t->y+1);
    printChar(scr, (char)(t->E && t->D ? 0xc1 : t->E ? 0xd9 : 0xc0));
    if (t->E) {
        gotoxy(scr, t->E->x, t->y+1);
        printChar(scr, (char)0xda);
        printLn(scr, t->E->x+1, t->x-1, t->y+1);
    }
    if (t->D) {
        printLn(scr, t->x+1, t->D->x-1, t->y+1);
        gotoxy(scr, t->D->x, t->y+1);
        printChar(scr, (char)0xbf);
    }
    draw(t->E, scr);
    draw(t->D, scr);
}

void printScreen(virtScr scr) {
    int i;
    for (i = 0; i <= scr->ymax; i++)
        printf("%s\n", scr->scr[i]);
}

void initScreen(virtScr scr) {
    int i, j;
    for (i = 0; i < MAXROWS; i++) {
        for (j = 0; j < MAXCOLS; j++)
            scr->scr[i][j] = 32 ; // espaco;
        scr->scr[i][MAXCOLS] = 0;
    }
}

void drawTree(ArvBin t) {
    int x = 2;
    virtScr scr;
    scr = malloc(sizeof *scr);
    setPos(t, 0, &x, &scr->ymax);  //define as posicoes dos nodos
    initScreen(scr);    //incializa a tela virtual
    draw(t, scr);       //desenha na tela virtual
    printScreen(scr);   //imprime tela virtual na tela real
    printf("\n");
    free(scr);
}