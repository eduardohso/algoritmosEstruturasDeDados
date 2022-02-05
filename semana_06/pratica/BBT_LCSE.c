#include "stdio.h"
#include "stdlib.h"

typedef struct sDias
{
    char diaSemana[13];
}Dias;

typedef struct sNo
{
    Dias info;
    struct sNo *prox;
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

void inserirNoFim(NO** lista, Dias elem){
    NO* novo;
    novo = alocarNO();

    if(novo!=NULL){
        novo->info=elem;
        if(listaVazia(*lista)){
            novo->prox=novo;
        }else{
            novo->prox=(*lista)->prox;
            (*lista)->prox=novo;
        }
        *lista = novo;
    }else{
        printf("\nErro na alocacao.");
    }
}

void exibir(NO* lista){
    if(!listaVazia(lista)){
        NO* aux;
        aux=lista->prox;
        printf("\n");
        do{
            printf("%s\t",aux->info.diaSemana);
            aux=aux->prox;
        }while (aux!=lista->prox);
        printf("\n");
    }else{
        printf("\nA lista esta vazia.");
    }
}

void removerDoInicio(NO** lista){
    if(!listaVazia(*lista)){
        if((*lista)==(*lista)->prox){
            desalocarNO(*lista);
            *lista=NULL;
        }else{
            NO* aux;
            aux=(*lista)->prox;
            (*lista)->prox=aux->prox;
            desalocarNO(aux);
        }
    }else{
        printf("\nA lista esta vazia.");
    }
}

void apagarNO(NO** lista){
    if(!listaVazia(*lista)){
        NO* aux;
        aux=(*lista)->prox;
        while(aux!=(*lista)){
            (*lista)->prox=aux->prox;
            desalocarNO(aux);
            aux=(*lista)->prox;
        }
        *lista=NULL;
        desalocarNO(aux);
    }else{
        printf("\nA lista esta vazia.");
    }
}