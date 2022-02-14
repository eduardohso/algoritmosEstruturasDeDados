#include "stdio.h"
#include "stdlib.h"

#define TAM 27

typedef struct sPilha
{
    char letras[TAM];
    int topo;
}Pilha;

void inicializar(Pilha *ptr){
    ptr->topo=-1;
}

int vazia(Pilha *ptr){
    if(ptr->topo==-1)
        return 1;
    else
        return 0;
}

int cheia(Pilha *ptr){
    if(ptr->topo+1==TAM)
        return 1;
    else
        return 0;
}

void empilhar(Pilha *ptr, char elem){
    if(!cheia(ptr)){
        (ptr->topo)++;
        ptr->letras[ptr->topo]=elem;
    }else{
        printf("A pilha esta cheia.\n");
    }
}

char desempilhar(Pilha *ptr){
    if(!vazia(ptr)){
        char elem;
        elem=ptr->letras[ptr->topo];
        (ptr->topo)--;
        return elem;
    }else{
        printf("A pilha esta vazia.\n");
    }
}

char retornarTopo(Pilha *ptr){
    if(!vazia(ptr)){
        char elem;
        elem=ptr->letras[ptr->topo];
        return elem;
    }else{
        printf("A pilha esta vazia.\n");
    }
}

void impressaoClasssica(Pilha *ptr){
    if(!vazia(ptr)){
        int i;
        printf("\n");
        for(i=ptr->topo;i>=0;i--){
            printf("%c ",ptr->letras[i]);
            (ptr->topo)--;
        }
        printf("\n");
    }else{
        printf("\nA pilha esta vazia.\n");
    }
}
