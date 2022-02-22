#include "stdio.h"
#include "stdlib.h"

#include "BBT_LCSE.h"

int main(){
    NO* ptrL;
    int op;
    CHAR elem;

    inicializarLista(&ptrL);
    do{

        printf("\n\nDigite uma opcao:\n");
        printf("1 - Inserir elemento no inicio da lista.\n");
        printf("2 - Remover elemento do final da lista.\n");
        printf("3 - Exibir elementos que forem vogais.\n");
        printf("4 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nDigite um caracter: ");
            scanf("%s",&elem.letra);
            fflush(stdin);
            inserirNoInicio(&ptrL,elem);
            break;
        case 2:
            removerDoFim(&ptrL);
            break;
        case 3:
            exibirVogais(ptrL);
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
}