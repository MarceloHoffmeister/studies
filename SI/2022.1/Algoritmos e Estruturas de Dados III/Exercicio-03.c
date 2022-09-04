#include <stdio.h>
#include "arvbin.c"

int alt(ArvBin t) {
    int he, hd;
    if (!t)
        return -1;
    he = alt(t->E);
    hd = alt(t->D);
    if (he > hd)
        return 1 + he;
    return 1 + hd;
}

int main(void){
    ArvBin t = str_tree("3(9,2(5))");
    printf("%d", alt(t));
    destroiArvBin(&t);
    return 0;
}