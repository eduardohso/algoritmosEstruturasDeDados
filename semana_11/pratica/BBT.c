#include "stdio.h"
#include "stdlib.h"

typedef struct sAlunoAcad{
    char nome[31];
    int idade;
    float peso;
}AlunoAcad;

typedef struct sNo{
    AlunoAcad info;
    struct sNo* esq;
    struct sNo* dir;
}NO;

void inicializar(NO** raiz){
    *raiz=NULL;
}

NO* alocarNO(){
    return (NO*) malloc(sizeof(NO));
}

void desalocarNO(NO* raiz){
    free(raiz);
}

void inserir(NO** raiz,AlunoAcad elem){
    NO* aux = *raiz;
    NO* aux2 = NULL;
    NO* novo = alocarNO();
    if(novo==NULL){
        printf("\nErro na alocacao");
        return;
    }
    novo->info=elem;
    novo->esq=NULL;
    novo->dir=NULL;
    while(aux!=NULL){
        aux2=aux;
        if(elem.peso< aux->info.peso)
            aux=aux->esq;
        else
            aux=aux->dir;
    }
    if(aux2==NULL){
        *raiz=novo;
    }else{
        if(elem.peso<aux2->info.peso){
            aux2->esq=novo;
        }else{
            aux2->dir=novo;
        }
    }
}

void em_ordem(NO* raiz){
    if(raiz!=NULL){
        em_ordem(raiz->esq);
        printf("Nome: %s\n",raiz->info.nome);
        printf("Idade: %d\n",raiz->info.idade);
        printf("Peso: %.1f\n",raiz->info.peso);
    }
}