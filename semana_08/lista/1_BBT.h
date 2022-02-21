#include "stdio.h"
#include "stdlib.h"

typedef struct sElemento
{
    int num;   
}Elemento;

typedef struct sNO
{
    Elemento info;
    struct sNO* prox;
}NO;

typedef struct sFila
{
    NO* inicio;
    NO* fim;
}Fila;

void inicializar(Fila *ptr){
    ptr->inicio=NULL;
    ptr->fim=NULL;
}

int vazia(Fila *ptr){
    if(ptr->inicio==NULL)
        return 1;
    return 0;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}

void enfileirar(Fila *ptr, Elemento elem){
    NO* novo=alocarNO();
    if(novo!=NULL){
        novo->info=elem;
        novo->prox=NULL;
        if(vazia(ptr)){
            ptr->inicio=novo;
            ptr->fim=novo;
        }else{
            (ptr->fim)->prox=novo;
            ptr->fim=novo;
        }
        printf("\nElemento enfileirado com sucesso.\n");
    }else{
        printf("\nErro na alocacao!\n");
    }
}
void desenfileirar(Fila *ptr){
    if(!vazia(ptr)){
        NO* aux=ptr->inicio;
        ptr->inicio=aux->prox;
        free(aux);
        if(ptr->inicio==NULL){
            ptr->fim=NULL;
        }
        printf("\nElemento desenfileirado com sucesso.\n");
    }else{
        printf("\nFila vazia!\n");
    }
}

void impressaoClassica(Fila *ptr){
    if(!vazia(ptr)){
        NO* aux=ptr->inicio;
        do{
            printf("%d ",aux->info.num);
            ptr->inicio=aux->prox;
            free(aux);
            aux=ptr->inicio;
            if(ptr->inicio==NULL){
                ptr->fim=NULL;
            }
        }
        while(aux!=NULL);
    }else{
        printf("\nFila vazia!\n");
    }
}