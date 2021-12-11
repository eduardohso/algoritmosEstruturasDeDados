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
    if(novoNo!=NULL){
        novoNo->info=elem;
        novoNo->prox=lista;
        lista=novoNo;
        return lista;
    }else{
        printf("\nErro na alocação do nó");
    }
}

No* apagarNos(No* lista){
    No* aux;

    if(!lista_vazia(lista)){
        aux=lista;

        while(aux->prox!=NULL){
            lista=aux->prox;
            desalocarNo(aux);
            aux=lista;
        }
        lista=NULL;
        desalocarNo(aux);
        printf("\nElementos apagados");

        return lista;
    }else{
        printf("\nLista vazia");
    }
}

void imprimirPosicaoVogais(No* lista){
    No* aux;    
    if(!lista_vazia(lista)){
        aux=lista;
        int cont=1;
        while(aux!=NULL){
            if( aux->info=='a'||aux->info=='A'||
                aux->info=='e'||aux->info=='E'||
                aux->info=='i'||aux->info=='I'||
                aux->info=='o'||aux->info=='O'||
                aux->info=='u'||aux->info=='U'){
                printf("A vogal %c esta na posicao %d.\n",aux->info,cont);
            }
            aux = aux->prox;
            cont++;
        }
    }else{
        
        printf("\nLista vazia");
    }
}