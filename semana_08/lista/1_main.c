#include "stdio.h"
#include "stdlib.h"

#include "1_BBT.h"

int main(){
    int op;
    Elemento elem;
    Fila *fila;

    fila = (Fila*) malloc (sizeof(Fila));
    if(fila!=NULL){
        inicializar(fila);

        do{
            printf("\nSelecione uma opcao:\n");
            printf("1 - Inserir um elemento na fila.\n");
            printf("2 - Remover um elemento da fila.\n");
            printf("3 - Exibir os elementos da fila (classica).\n");
            printf("4 - Sair.\n");
            printf("-->");
            scanf("%d",&op);
            fflush(stdin);
            switch (op)
            {
            case 1:
                printf("\nDigite um numero inteiro: ");
                scanf("%d",&elem.num);
                fflush(stdin);

                enfileirar(fila,elem);
                break;
            case 2:
                desenfileirar(fila);
                break;
            case 3:
                impressaoClassica(fila);
                break;
            default:
                printf("\nSaindo.\n");
                break;
            }
        }while(op!=4);
    }
    return 0;
}