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
            inserirNoInicio(&ptrLista,elem);
            break;
        case 2:
            printf("\nDigite o elemento a ser removido: ");
            scanf("%c",&elem);
            removerValor(&ptrLista,elem);
            break;
        case 3:
            exibirElementos(ptrLista);
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