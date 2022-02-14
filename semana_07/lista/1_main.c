#include "stdio.h"
#include "stdlib.h"

#include "1_BBT.h"

int main(){
    Pilha s;
    int op;
    char elem;

    inicializar(&s);
    do{
        printf("\nDigite uma opcao:\n");
        printf("1 - Inserir elemento no topo da pilha.\n");
        printf("2 - Remover elemento do topo da pilha.\n");
        printf("3 - Retornar o elemento que esta no topo da pilha.\n");
        printf("4 - Exibir os elementos da pilha.\n");
        printf("5 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nDigite uma letra: ");
            scanf("%c",&elem);
            fflush(stdin);
            empilhar(&s,elem);            
            break;
        case 2:
            printf("\'%c\' desempilhado com sucesso.\n",desempilhar(&s));
            break;
        case 3:
            printf("O elemento do topo e: %c",retornarTopo(&s));
            break;
        case 4:
            impressaoClasssica(&s);
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