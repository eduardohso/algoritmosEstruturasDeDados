#include "stdio.h"
#include "stdlib.h"

#include "ex1BBT.c"

int main(void){

    int op;
    Lista* l;
    l = (Lista*) malloc(sizeof(Lista));

    if(l!=NULL){

        do{
            printf("Digite uma opcao:\n");
            printf("1 - Inicializar lista\n");
            printf("2 - Inserir elemento no final da lista\n");
            printf("3 - Imprimir os elementos da lista\n");
            printf("4 - Sair\n");

            scanf("%d", &op);

            switch (op)
            {
            case 1:
                inicializar(l);
                printf("%d\n",l->tam);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                printf("Saindo...");
                break;
            default:
                break;
            }
        }while(op!=4);
    }else{
        printf("Falha na alocação\n");
    }

    return 0;
}