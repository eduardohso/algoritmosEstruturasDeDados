#include "stdio.h"
#include "stdlib.h"

typedef struct sChar
{
    char letra;
}CHAR;

typedef struct sNo
{
    CHAR info;
    struct sNo* prox;
}NO;

void inicializarLista(NO** lista){
    *lista = NULL;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}
void desalocarNO (NO *lista){
    free(lista);
}

int listaVazia(NO* lista){
    if(lista == NULL)
        return 1;
    else
        return 0;
}

