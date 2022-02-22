#include "stdio.h"
#include "stdlib.h"

#include "2_BBT.h"

int main(){
    int op; 
    Elemento elem;
    Elemento E;
    Deque *deque;
    deque = (Deque*) malloc (sizeof(Deque));
    if(deque!=NULL){
        inicializar(deque);

        do{
            printf("\nSelecione uma opcao:\n");
            printf("1 - Inserir um elemento no inicio da deque.\n");
            printf("2 - Remover um elemento do inicio da deque.\n");
            printf("3 - Remover um elemento do final da deque.\n");
            printf("4 - Exibir os elementos da deque.\n");
            printf("5 - Sair.\n");
            printf("-->");
            scanf("%d",&op);
            fflush(stdin);
            switch (op)
            {
            case 1:
                printf("\nDigite um numero real: ");
                scanf("%f",&elem.num);
                fflush(stdin);

                inserirInicio(deque,elem);
                break;
            case 2:
                E=removerInicio(deque);
                printf("\n%0.2f removido com sucesso.\n",E.num);
                break;
            case 3:
                E=removerFinal(deque);
                printf("\n%0.2f removido com sucesso.\n",E.num);
                break;
            case 4:
                impressao(deque);
                break;
            default:
                printf("\nSaindo.\n");
                break;
            }
        }while(op!=5);
    }
    return 0;
}