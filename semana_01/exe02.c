#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[21];
    int matricula;
    float notaFinal;
}Aluno;

int main(){
    char nomeS[21];
    int nAlunos;
    float media, notas;
    Aluno *a;

    printf("Quantos alunos deseja cadastrar?\n");
    scanf("%d",&nAlunos);

    a = (Aluno *) malloc(nAlunos* sizeof(Aluno));
    if(a == NULL)
        exit(1);

    for(int i = 0;i < nAlunos;i++){
        printf("\nMatricula do aluno[%d]: ",i+1);
        scanf("%d", &a[i].matricula);
        printf("Nome do aluno[%d]: ",i+1);
        scanf("%s",&a[i].nome);
        printf("Nota do aluno[%d]: ",i+1);
        scanf("%f",&a[i].notaFinal);
        notas+=a[i].notaFinal;
    }

    media = notas / nAlunos;
    printf("A media aritmetica das notas: %0.2f",media);

    free(a);
    a=NULL;
    return 0;
}