#include "stdio.h"
#include "stdlib.h"

typedef struct sPessoa
{
    char nome[31];
    char opBancaria; 
}Pessoa;

typedef struct sNO
{
    Pessoa info;
    struct sNO* prox;
}NO;

typedef struct sFila
{
    NO* inicio;
    NO* fim;
}Fila;

void inic(Fila *ptr){
    ptr->inicio=NULL;
    ptr->fim=NULL;
}

int vazia(Fila *ptr){
    if(ptr -> inicio == NULL)
        return 1;
    return 0;
}

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}

void enfileirar(Fila *ptr, Pessoa elem){
    NO* novo = alocarNO();
    if(novo!=NULL){
        novo->info=elem;
        novo->prox=NULL;
        if(vazia(ptr)){
            ptr->inicio=novo;
            ptr->fim=novo;
        }else{
            (ptr->fim)->prox=novo;
            ptr->fim=novo;
        }
    }else{
        printf("Erro na alocacao!\n");
    }
}

void impressaoNaoClassica(Fila *ptr){
    if(!vazia(ptr)){
        NO* aux=ptr->inicio;
        while (aux!=NULL)
        {
            printf("Pessoa %s vai ",aux->info.nome);    
            switch (aux->info.opBancaria)
            {
            case 'S':
            case 's':
                printf("SACAR uma quantia.\n");
                break;
            case 'D':
            case 'd':
                printf("Depositar uma quantia.\n");
                break;
            case 'P':
            case 'p':
                printf("EFETUAR UM PAGAMENTO\n");
                break;
            default:
                break;
            }
            aux=aux->prox;
        }
            printf("\n");
    }else{
        printf("\nFila vazia!\n");
    }
}