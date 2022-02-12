#include "stdio.h"
#include "stdlib.h"

#include "BBT_PilhaEstatica.h"

int main(){
    Pilha s;
    int op;
    float elem;

    inicializar(&s);
    do{
        printf("\n\nDigite uma opcao:\n");
        printf("1 - Inserir elemento no topo da pilha.\n");
        printf("2 - Remover elemento do topo da pilha.\n");
        printf("3 - Exibir elementos da pilha.\n");
        printf("4 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nDigite um numero real: ");
            scanf("%f",&elem);
            fflush(stdin);
            empilhar(&s,elem);            
            break;
        case 2:
            printf("%.1f desempilhado com sucesso.\n",desempilhar(&s));
            break;
        case 3:
            impressaoNaoClassica(&s);
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