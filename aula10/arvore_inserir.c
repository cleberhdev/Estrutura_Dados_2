#include <stdlib.h>
#include <stdio.h>
struct no{
    char conteudo;
    struct no *sae;
    struct no *sad;
} no;
typedef struct no Arv;
Arv * criar(char *c, Arv *e, Arv *d){
    Arv *arv = (Arv*) malloc(sizeof(Arv));
    arv->conteudo = c;
    arv->sae = e;
    arv->sad = d;
    return arv;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
