#include "stdio.h"
#include "stdlib.h"

#include "2_BBT.h"

int main(){
    NO* Pilha;
    int op;
    Prato prato;
    Prato P;

    inicializar(&Pilha);
     do{
        printf("\nDigite uma opcao:\n");
        printf("1 - Inserir prato no topo da pilha.\n");
        printf("2 - Remover prato do topo da pilha.\n");
        printf("3 - Retornar o prato que esta no topo da pilha.\n");
        printf("4 - Exibir os pratos da pilha.\n");
        printf("5 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nInsira a cor do prato: ");
            gets(prato.cor);
            fflush(stdin);
            printf("\nInforme o tamanho do prato (Pequeno,Medio,Grande): ");
            gets(prato.tamanho);
            fflush(stdin);
            printf("\nInforme o tipo do prato (Porcelana,Plastico,Vidro): \n");
            gets(prato.tipo);
            fflush(stdin);
            empilhar(&Pilha,prato);            
            break;
        case 2:
            P = desempilhar(&Pilha);
            printf("\nPrato cor:\'%s\', tamanho:\'%s\' e tipo:\'%s\', foi desempilhado com sucesso.",P.cor,P.tamanho,P.tipo);
            break;
        case 3:
            printf("O elemento do topo e: %c",retornarTopo(Pilha));
            break;
        case 4:
            impressaoClassica(Pilha);
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