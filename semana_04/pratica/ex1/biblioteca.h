#include "stdio.h"
#include "stdlib.h"

typedef struct sNo
{
    char info;
    struct sNo* prox;
}No;

void inicializarLista(No** lista){
    *lista = NULL;
}

No* alocarNo(){
    return (No*)malloc(sizeof(No));
}

void desalocarNo(No* q){
    free (q);
}

int listaVazia(No* lista){
    if(lista==NULL)
        return 1;
    else
        return 0;
}

void inserirInicio(No** lista,char elem){
    No* novo;
    novo=alocarNo();
    if(novo!=NULL){
        novo->info=elem;
        novo->prox=*lista;
        *lista=novo;
        printf("\nElemento inserido com sucesso\n\n");
    }else{
        printf("Erro de alocacao!\n");
    }
}

void removerInicio(No** lista){
    if(!listaVazia(*lista)){
        No* aux;
        aux=*lista;
        
        *lista=aux->prox;
        desalocarNo(aux);
        printf("\nElemento removido com sucesso\n\n");

    }else{
        printf("\nA lista esta vazia\n\n");
    }
}

void exibirElementos(No* lista){
    if(!listaVazia(lista)){
        No* aux;
        aux=lista;
        printf("\n");
        while(aux!=NULL){
            printf("%c ",aux->info);
            aux=aux->prox;
        }
        printf("\n");
    }else{
        printf("\nA lista esta vazia\n\n");
    }
}