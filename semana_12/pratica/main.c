#include "stdio.h"
#include "stdlib.h"

#include "BBT.h"
int main(){
    int op;
    NO* ptRaiz;
    inicializar(&ptRaiz);

    do{
        printf("Selecione uma adas opcoes abaixo:  \n");
        printf("1 - Inserir novo funcionario na arvore AVL \n");
        printf("2 - Exibir funcionarios cadastrados na arvore AVL \n");
        printf("3 - Sair \n");
        printf("--> ");
        scanf("%d", &op);
        fflush(stdin);
        switch (op){
            case 1:
                break;
            case 2:
                break;
            default:
                printr("Saindo...");
                break;
        }
    }while(op!=3);
    return 0;
}