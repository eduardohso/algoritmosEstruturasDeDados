#include "stdio.h"
#include "stdlib.h"

#include "biblioteca.h"

int main(){
    int i,op;
    char c;

    No* ptrL;

    ptrL=inicializarLista(ptrL);
    do{
        printf("\nEscolha uma opcao:");
        printf("\n1 - Inserir elemento no incio da lista");
        printf("\n2 - Remover elementos da lista");
        printf("\n3 - Imprimir posicao das vogais da lista");
        printf("\n4 - Sair\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            for(i=0;i<5;i++){
                printf("\nInsira um caracter: ");
                scanf("%c",&c);
                fflush(stdin);

                ptrL=inserirInicio(ptrL,c);
            }
            break;
        case 2:
            printf("\nApagando");
            ptrL = apagarNos(ptrL);
            break;
        case 3:
            imprimirPosicaoVogais(ptrL);
            break;
        case 4:
            printf("Saindo");
            break;
        default:
            break;
        }
    }while(op!=4);

    return 0;
}