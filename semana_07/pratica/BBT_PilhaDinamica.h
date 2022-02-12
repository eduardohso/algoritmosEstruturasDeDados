#include "stdio.h"
#include "stdlib.h"

typedef struct sLivro
{
    char titulo[31];
    int numP;
}Livro;

typedef struct sNO
{
    Livro info;
    struct sNO *prox;
}NO;

void inicializar(NO** topo){
    *topo=NULL;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}
void desalocarNO (NO *lista){
    free(lista);
}

int vazia(NO* topo){
    if(topo==NULL)
        return 1;
    else 
        return 0;
}

void empilhar(NO** topo, Livro elem){
    NO* novo = alocarNO();
    if(novo!=NULL){
        novo->info=elem;
        novo->prox=*topo;
        *topo=novo;
        printf("Elemento empilhado com sucesso.\n");
    }else{
        printf("Erro na alocacao.\n");
    }
}

Livro desempilhar(NO** topo){
    if(!vazia(*topo)){
        Livro L;
        NO* aux;
        aux = *topo;
        *topo = aux->prox;
        L = aux->info;
        desalocarNO(aux);
        return L;
    }else{
        printf("A pilha esta vazia.\n");
    }
}

void impressaoNaoClassica(NO* topo){
    if(!vazia(topo)){
        NO* aux=topo;
        while(aux!=NULL){
            printf("\nLivro \'%s\' possui %d paginas.\n",aux->info.titulo,aux->info.numP);
            aux=aux->prox;
        }
    }else{
        printf("A pilha esta vazia.\n");
    }
}