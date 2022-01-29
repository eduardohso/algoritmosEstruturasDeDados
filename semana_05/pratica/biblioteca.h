#include "stdio.h"
#include "stdlib.h"

typedef struct sNo{
    char info;
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

void inserirNoInicio(NO** lista,char elem){
    NO* novo;
    novo = alocarNO();
    if(novo!=NULL){
        novo->info = elem;
        novo->dir = *lista;
        novo->esq = NULL;
        if(!listaVazia(*lista))
            (*lista)->esq=novo;
        *lista = novo;
        printf("\nElemento inserido com sucesso");
    }else{
        printf("\nErro na alocacao");
    }   
}

void exibirElementos(NO* lista){
    if(!listaVazia(lista)){
        NO* aux;
        aux=lista;
        printf("\n");
        while(aux!=NULL){
            printf("%c ",aux->info);
            aux=aux->dir;
        }
        printf("\n");
    }else{
        printf("\nA lista esta vazia\n\n");
    }
}

NO* pesquisar(NO* lista, char elem){
    if(!listaVazia(lista)){
        NO* aux;
        aux=lista;
        while(aux!=NULL){
            if(aux->info==elem){
                printf("\nElemento %c encontrado",aux->info);
                return aux;
            }
            aux=aux->dir;
        }
        printf("\nElemento %c encontrado",aux->info);
    }else{
        printf("\nA lista esta vazia");
    }
    return NULL;
}

void removerDoInicio(NO** lista){
    if(!listaVazia(*lista)){
        NO* aux;
        aux = *lista;
        *lista = aux->dir;
        if(!listaVazia(*lista)){
            (*lista)->esq=NULL;
        }
        desalocarNO(aux);
        printf("\nElemento %c removido do inicio com sucesso",aux->info);
    }else{
        printf("\nA lista esta vazia");
    }
}

void removerValor(NO** lista,char elem){
    if(!listaVazia(*lista)){
        NO* q;
        if((q=pesquisar(*lista,elem))!=NULL){
            if(*lista==q){
                removerDoInicio(lista);
            }else{
                (q->esq)->dir=q->dir;
                if(q->dir!=NULL)
                    (q->dir)->esq=q->esq;
                printf("\nElemento %c removido com sucesso",q->info);
            }
            
        }else{
            printf("\nA lista esta vazia.");
        }
    }
}