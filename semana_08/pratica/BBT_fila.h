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
    
}