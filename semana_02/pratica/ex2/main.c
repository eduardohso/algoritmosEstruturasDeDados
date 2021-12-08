#include "stdio.h"
#include "stdlib.h"

#include "biblioteca.h"

int main(){
    int op;
    Lista L;
    Contato contato;

    lista_inicializar(&L);
    do{
        printf("Escolha uma opção:\n");
        printf("1 - Cadastrar contato\n");
        printf("2 - Exibir contatos\n");
        printf("3 - Sair\n");
        scanf("%d",&op);
        fflush(stdin);
        switch(op){
            case 1:
                printf("Digite o nome do contato: ");
                scanf("%s",&contato.nomeContato);
                fflush(stdin);
                printf("Digite o numero do contato: ");
                scanf("%s",&contato.numCelular);
                fflush(stdin);

                lista_inserirFim(&L,contato);
                break;
            case 2:
                imprimirLista(&L);
                break;
            default:
                return 0;
        }
    }while(op!=3);

    return 0;
}