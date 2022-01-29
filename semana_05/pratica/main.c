#include "stdio.h"
#include "stdlib.h"

#include "biblioteca.h"

int main(){
    NO* ptrLista;
    int op;
    char elem;

    inicializarLista(&ptrLista);

    do{

        printf("Digite uma opcao:\n");
        printf("1 - Inserir no inicio.\n");
        printf("2 - Remover elemento da lista.\n");
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
            inserirInicio(&ptrLista,elem);
            break;
        case 2:
            break;
        case 3:
            exibirElementos(ptrLista);
            break;
        case 4:
            printf("Saindo.");
            apagarNos(&ptrLista);
            break;
        
        default:
        printf("Opcao invalida!\n");
            break;
        }
    }while(op!=4);
}