#include "stdio.h"
#include "stdlib.h"

#include "BBT.c"

int main(){
    NO* ptRaiz;
    AlunoAcad x;
    int op;

    inicializar(&ptRaiz);

    do{
        printf("Selecione uma das opcoes abaixo:  \n");
        printf("1 - Inserir novo aluno na ABP \n");
        printf("2 - Exibir alunos cadastrados na ABP \n");
        printf("3 - Sair \n");

        printf("--> ");

        scanf("%d", &op);
        fflush(stdin);

        switch (op) {
            case 1:
                printf("\nDigite o nome do aluno:\n");
                printf("--> ");
                scanf("%s", x.nome);
                fflush(stdin);
                printf("Digite a idade do aluno: \n");
                printf("--> ");
                scanf("%d", &x.idade);
                fflush(stdin);
                printf("Digite o peso do aluno: \n");
                printf("--> ");
                scanf("%f", &x.peso);
                fflush(stdin);

                inserir(&ptRaiz,x);
                
                break;
            case 2:
                em_ordem(ptRaiz);
                break;
            default:
                printf("\nSaindo.");
                break;
        }
                
    }while(op!=3);
}