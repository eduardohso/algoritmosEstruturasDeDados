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


