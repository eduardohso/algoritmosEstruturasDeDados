#include "stdio.h"
#include "stdlib.h"

typedef struct sElemento{
    float num;
}Elemento;
typedef struct sNO{
    Elemento info;
    struct sNO *esq;
    struct sNO *dir;
}NO;

typedef struct sDeque{
    NO *inicio;
    NO *fim;
}Deque;

void inicializar(Deque *ptr){
    ptr->inicio=NULL;
    ptr->fim=NULL;
}

int vazia(Deque *ptr){
    if(ptr->inicio==NULL)
        return 1;
    return 0;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}

void inserirInicio(Deque *ptr, Elemento elem){
    NO* novo=alocarNO();
    if(novo!=NULL){
        novo->info=elem;
        novo->dir=ptr->inicio;
        novo->esq=NULL;
        if(ptr->inicio==NULL)
            ptr->fim=novo;
    }else{
        (ptr->inicio)->esq=novo;
    }
    ptr->inicio=novo;
    printf("Elemento inserido com sucesso.\n");
}

Elemento removerInicio(Deque *ptr){
    NO* aux;
    Elemento e;
    if(!vazia(ptr)){
        aux=(ptr->inicio)->dir;
        e=(ptr->inicio)->info;
        free(ptr->inicio);
        ptr->inicio=aux;
        if(ptr->inicio!=NULL)
            (ptr->inicio)->esq=NULL;
        else
            ptr->fim=NULL;
    }else{
        printf("\nDeque vazia!\n");
    }
    return e;
}

Elemento removerFinal(Deque *ptr){
    NO* aux;
    Elemento e; 
    if(!vazia(ptr)){
        if(aux==ptr->inicio){
            ptr->inicio=NULL;
            ptr->fim=NULL;
        }else{
            aux = (ptr->fim)->esq;
            e=(ptr->fim)->info;
            free(ptr->fim);
            ptr->fim=aux;
            if(ptr->fim!=NULL)
                ptr->fim->dir=NULL;
        }
    }else{
        printf("\nDeque vazia!\n");
    }
    return e;
}

void impressao(Deque *ptr){
    if(!vazia(ptr)){
        printf("\n");
        NO* aux=ptr->inicio;
        while(aux!=NULL){
            printf("%0.2f ",aux->info.num);
            aux=aux->dir;
        }
        printf("\n");
    }else{
        printf("\nDeque vazia!\n");
    }
}
