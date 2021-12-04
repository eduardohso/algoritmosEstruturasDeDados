#include "stdio.h"
#include "stdlib.h"

#define MAX 20

typedef struct sLista
{
    int tam;
    char str[MAX];
}Lista;

void inicializar(Lista *ptr){
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
        printf("Nao é possivel inserir mais elementos.\n");
        return 0;
    }

    ptr -> str [ptr->tam]=c;
    ptr -> tam++;
    
}