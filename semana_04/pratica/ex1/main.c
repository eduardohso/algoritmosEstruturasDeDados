#include "stdio.h"
#include "stdlib.h"

#include "biblioteca.h"

int main(){
    No* ptrL;
    int op;
    char elem;

    inicializarLista(&ptrL);

    do{

        printf("Digite uma opcao:\n");
        printf("1 - Inserir no inicio.\n");
        printf("2 - Remover do inicio.\n");
        printf("3 - Exibir elementos.\n");
        printf("4 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nDigite um caracter: ");
            scanf("%c",&elem);
            fflush(stdin);
            inserirInicio(&ptrL,elem);
            break;
        case 2:
            removerInicio(&ptrL);
            break;
        case 3:
            exibirElementos(ptrL);
            break;
        case 4:
            printf("Saindo.");
            break;
        
        default:
        printf("Opcao invalida!\n");
            break;
        }

    }while(op!=4);

    return 0;
}