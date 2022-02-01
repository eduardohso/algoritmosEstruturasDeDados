#include "stdio.h"
#include "stdlib.h"

typedef struct sNo{
    float info;
    struct sNo* dir;
    struct sNo* esq;
}NO;

void inicializarLista(NO** lista){
    *lista = NULL;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}
void desalocarNO (NO* q){
    free(q);
}

int listaVazia(NO* lista){
    if(lista == NULL)
        return 1;
    else
        return 0;
}

void inserirNoFim(NO** lista,float elem){
    NO *novo;
    NO *aux;
    novo=alocarNO();
    if(novo!=NULL){
        novo->info=elem;
        novo->esq=NULL;
        novo->dir=NULL;
        if(listaVazia(*lista)){
            *lista=novo;
        }else{
            aux=*lista;
            while(aux->dir!=NULL){
                aux=aux->dir;
            }
            aux->dir=novo;
            novo->esq=aux;
        }
    }else{
        printf("\nErro na alocacao");
    }
}

void removerDoFinal(NO** lista){
    if(!listaVazia(*lista)){
        NO *aux = *lista;
        while(aux->dir!=NULL){
            aux=aux->dir;
        }
        if(aux->esq==NULL){
            *lista=aux->dir;
        }else{
            (aux->esq)->dir=NULL;
        }
        free(aux);
    }else{
        printf("\nA lista esta vazia");
    }
}

void exibirElementosOrdemInversa(NO* lista){
    if(!listaVazia(lista)){
        NO* aux = lista;
        while(aux->dir!=NULL){
            aux=aux->dir;
        }
        printf("%0.2f ",aux->info);
        while(aux->esq!=NULL){
            aux=aux->esq;
            printf("%0.2f ",aux->info);
        }
        
        printf("\n");
    }else{
        printf("\nA lista esta vazia");
    }
}

void exibirSomaElementos(NO* lista){
    float soma,var;
    if(!listaVazia(lista)){
        NO* aux = lista;
        while(aux!=NULL){
            soma=aux->info;
            soma+=soma;
            aux=aux->dir;
        }
        printf("\nA soma de todos os elementos da lista e: %0.2f",soma);
    }else{
        printf("\nA lista esta vazia");
    }
}
