#include "stdio.h"
#include "stdlib.h"

#define TAMP 50

typedef struct sPilha
{
    float itens[TAMP];
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
    if(ptr->topo+1==TAMP)
        return 1;
    else
        return 0;
}

void empilhar(Pilha *ptr, float elem){
    if(!cheia(ptr)){
        (ptr->topo)++;
        ptr->itens[ptr->topo]=elem;
    }else{
        printf("A pilha esta cheia.\n");
    }
}

float desempilhar(Pilha *ptr){
    if(!vazia(ptr)){
        float elemento;
        elemento=ptr->itens[ptr->topo];
        (ptr->topo)--;
        return elemento;
    }else{
        printf("A pilha esta vazia.\n");
    }
}

void impressaoNaoClassica(Pilha *ptr){
    if(!vazia(ptr)){
        int i;
        printf("\n");
        for(i=ptr->topo;i>=0;i--){
            printf("%.1f ",ptr->itens[i]);
        }
        printf("\n");
    }else{
        printf("A pilha esta vazia.\n");
    }
}