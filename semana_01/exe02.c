#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[21];
    int matricula;
    float notaFinal;
}AlunoS;

int main(){
    char nomeS[21];
    int nAlunos,i=0;
    float media, notas;
    AlunoS *a;

    printf("Quantos alunos deseja cadastrar?\n");
    scanf("%d",&nAlunos);

    a = (AlunoS *) malloc(nAlunos* sizeof(AlunoS));
    if(a == NULL)
        exit(1);

    for(i;i < nAlunos;i++){
        printf("\nMatricula do aluno[%d]: ",i+1);
        scanf("%d", &a[i].matricula);
        printf("Nome do aluno[%d]: ",i+1);
        scanf("%s",&a[i].nome);
        printf("Nota do aluno[%d]: ",i+1);
        scanf("%f",&a[i].notaFinal);
        notas+=a[i].notaFinal;
    }

    media = notas / nAlunos;
    printf("A media aritmeticas das notas: %0.2f",media);

    free(a);
    a=NULL;
    return 0;

}


