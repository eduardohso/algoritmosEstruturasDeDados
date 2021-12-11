#include "stdio.h"
#include "stdlib.h"

typedef struct sNo
{
   char info;
    struct sNo *prox;
}No;

No* inicializarLista(No* lista){
    lista=NULL;
    return lista;
}

int lista_vazia(No* lista){
    if(lista==NULL)
        return 1;
    return 0;
}

No* alocarNo(){
    return (No*) malloc(sizeof(No));
}

void desalocarNo(No* q){
    free(q);
}

No* inserirInicio(No* lista, char elem){
    No* novoNo;
    novoNo=alocarNo();
}