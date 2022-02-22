#include "stdio.h"
#include "stdlib.h"

typedef struct sPrato
{
    char cor[12];
    char tamanho[7];
    char tipo[9];
}Prato;

typedef struct sNo
{
    Prato info;
    struct sNO *prox;
}NO;

void inicializar(NO** topo){
    *topo=NULL;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}

void desalocarNO(NO *pilha){
    free(pilha);
}

int vazia(NO* topo){
    if(topo==NULL)
        return 1;
    else
        return 0;
}

void empilhar(NO** topo, Prato elem){
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

Prato desempilhar(NO** topo){
    if(!vazia(*topo)){
        Prato P;
        NO* aux = *topo;
        *topo = aux->prox;
        P=aux->info;
        desalocarNO(aux);
        return P;
    }else{
        printf("A pilha esta vazia.\n");
    }
}

Prato retornarTopo(NO* topo){
    if(!vazia(topo)){
        return topo->info;
    }else{
        printf("A pilha esta vazia.\n");
    }
}

void impressaoClassica(NO *topo){
    if(!vazia(topo)){
        NO *aux;
        while(!vazia(topo)){
            aux = topo;
            ("O prato tem cor: %s, tamanho: %s, do tipo: %s.\n",topo->info.cor,topo->info.tamanho,topo->info.tipo );
            topo=aux->prox;
            desalocarNO(aux);
        }
    }else{
        printf("A pilha esta vazia.\n");
    }
}