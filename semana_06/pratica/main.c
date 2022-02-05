#include "stdio.h"
#include "stdlib.h"

#include "BBT_LCSE.c"

int main(){
    NO* ptrL;
    int op;
    Dias nome;

    inicializarLista(&ptrL);
    do{
        printf("\n\nDigite uma opcao:\n");
        printf("1 - Inserir dia da semana no final da LCSE.\n");
        printf("2 - Remover dia da semana do inicio da LCSE.\n");
        printf("3 - Exibir dias da semana na LCSE.\n");
        printf("4 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nDigite o dia da semana: ");
            scanf("%s",&nome.diaSemana);
            fflush(stdin);
            inserirNoFim(&ptrL,nome);
            break;
        case 2:
            removerDoInicio(&ptrL);
            break;
        case 3:
            exibir(ptrL);
            break;
        case 4:
            printf("Saindo.");
            apagarNO(&ptrL);
            break;
        default:
        printf("Opcao invalida!\n");
            break;
        }
    }while(op!=4);

    return 0;
}