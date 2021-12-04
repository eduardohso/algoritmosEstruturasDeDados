#include "stdio.h"
#include "stdlib.h"

#define MAX 20

typedef struct sLista
{
    int tam;
    char str[MAX];
}Lista;

void inicializarLista(Lista *ptr){
    ptr -> tam = 0;
}

int listaCheia(Lista *ptr){
    if (ptr -> tam==MAX){
        return 1;
    }else
    {
        return 0;
    }
}

int listaVazia(Lista *ptr){
    if (ptr -> tam==0){
        return 1;
    }else
    {
        return 0;
    }
}

int inserirNoFinal(Lista *ptr, char c){
    if(listaCheia(ptr)){
        printf("Nao e possivel inserir mais elementos.\n");
        return 0;
    }

    ptr -> str [ptr->tam]=c;
    ptr -> tam++;
}

int imprimirElementos(Lista *ptr){
    if(listaVazia(ptr)){
        printf("A lista esta vazia\n");
        return 0;
    }
    for (int i = 0; i < ptr->tam; i++)
    {
        printf("Elemento %d: %c\n",i+1,ptr->str[i]);
    }
    return 1;
}