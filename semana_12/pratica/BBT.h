#include "stdio.h"
#include "stdlib.h"

typedef struct sFuncionario{
    char nome[31];
    int anoC;
    float salario;
}Funcionario;

typedef struct sNo{
    Funcionario info;
    int fb;
    struct sNo *esq;
    struct sNo *dir;
}NO;

void inicializar(NO** raiz){
    *raiz = NULL;
}

NO* alocarNO(){
    return (NO*) malloc(sizeof(NO));
}

void desalocarNO(NO* q){
    free(q);
}

int inserir(NO **raiz,Funcionario elem){
    int ok;
    if(*raiz == NULL){
        *raiz=alocarNO();
        if(*raiz == NULL){
            printf("Erro na alocacao!\n");
            return 0;
        }
        (*raiz)->esq=NULL;
        (*raiz)->dir=NULL;
        (*raiz)->info=elem;
        (*raiz)->fb=0;
        return 1;
    }
    if(elem.salario<(*raiz)->info.salario){
        ok=inserir(&(*raiz)->esq,elem);
        if(ok){
            switch((*raiz)->fb){
                case -1:
                    (*raiz)->fb=0;
                    ok=0;
                    break;
                case 0:
                    (*raiz)->fb=+1;
                    break;
                case +1:
                    avl_aux1(&(*raiz));
                    ok=0;
                    break;
            }
        }
    }else if(elem.salario<(*raiz)->info.salario){
        ok=inserir(&(*raiz)->dir,elem);
        if(ok){
            switch((*raiz)->fb){
                case +1:
                    (*raiz)->fb=0;
                    ok=0;
                    break;
                case 0:
                    (*raiz)->fb=-1;
                    break;
                case -1:
                    avl_aux2(&(*raiz));
                    ok=0;
                    break;
            }
        }
    }