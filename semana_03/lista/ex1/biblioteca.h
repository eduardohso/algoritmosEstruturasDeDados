#include "stdio.h"
#include "stdlib.h"

typedef struct sDisciplina{
    char nome[20], codigo[10];
    int creditos, cargaH;
}Disciplina;

typedef struct sNo
{
    Disciplina info;
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

No* inserirFim(No* lista, Disciplina elem){
    No* novo;
    No* aux;

    novo=alocarNo();
    if(novo!=NULL){
        novo->info=elem;
        novo->prox=NULL;
        if(lista_vazia(lista)){
            lista=novo;
        }else{
            aux=lista;
            while (aux->prox!=NULL)
                aux=aux->prox;
            aux->prox=novo;
            
        }
        return lista;
    }else{
        printf("\nErro na alocacao");
        return NULL;
    }
    return lista;
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

No* pesquisar(No* lista,char elem[10]){
    No *aux;
    aux=lista;
    if(!lista_vazia(lista)){
        while(aux!=NULL){
            if(strcmp(aux->info.codigo,elem)==0)
                return aux;
            aux=aux->prox;
        }
    }
    return NULL;
}

No* removerDisciplina(No* lista,char elem[10]){
    No* q;
    No* aux;

    if((q=pesquisar(lista,elem))!=NULL){
        aux=lista;
        if(aux==q){
            removerInicio(lista);
        }else{
            while(aux->prox!=q){
                aux=aux->prox;
            }
            aux->prox=q->prox;
            desalocarNo(q);
            return lista;
        }
    }
    return lista;
}

No* removerInicio(No *lista){
    No* q;
    q = lista;
    if(!lista_vazia(lista)){
        lista=q->prox;
        desalocarNo(q);
        printf("\nA disciplina foi removida");
        return lista;
    }else
        printf("\nLista vazia");
}

void imprimir(No* lista){
    No* aux;    
    if(!lista_vazia(lista)){
        aux=lista;
        int cont=1;
        while(aux!=NULL){
            if(aux->info.codigo=="SIN"&&aux->info.cargaH>60){
                printf("\nDisciplina: %s, codigo: %s, cargaHH horaria: %d, creditos: %d",aux->info.nome,aux->info.codigo,aux->info.cargaH,aux->info.creditos);
            }
            cont++;
            aux = aux->prox;
        }
    }else{
        
        printf("\nLista vazia");
    }
}