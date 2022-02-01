#include "stdio.h"
#include "stdlib.h"

#include "BBT_LDE.c"

int main(){
    NO* ptrLista;
    int op;
    float elem;

    inicializarLista(&ptrLista);

    do{

        printf("\nDigite uma opcao:\n");
        printf("1 - Inserir elemento no final da lista.\n");
        printf("2 - Remover elemento do final da lista.\n");
        printf("3 - Exibir elementos em ordem inversa.\n");
        printf("4 - Exibir a soma de todos os elementos da lista.\n");
        printf("5 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nDigite um numero real: ");
            scanf("%f",&elem);
            fflush(stdin);
            inserirNoFim(&ptrLista,elem);
            break;
        case 2:
            removerDoFinal(&ptrLista);
            break;
        case 3:
            exibirElementosOrdemInversa(ptrLista);
            break;
        case 4:
            exibirSomaElementos(ptrLista);
            break;
        case 5:
            printf("Saindo.");
            break;
        default:
        printf("Opcao invalida!\n");
            break;
        }
    }while(op!=5);

    return 0;
}