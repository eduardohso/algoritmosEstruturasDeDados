#include "stdio.h"
#include "stdlib.h"

#include "BBT_PilhaDinamica.h"

int main(){
    NO* Pilha;
    int op;
    Livro book;

    inicializar(&Pilha);
    do{
        printf("\n\nDigite uma opcao:\n");
        printf("1 - Inserir um livro no topo da pilha.\n");
        printf("2 - Remover um livro do topo da pilha.\n");
        printf("3 - Exibir elementos da pilha.\n");
        printf("4 - Sair.\n");
        scanf("%d",&op);
        fflush(stdin);
        Livro L;
        switch (op)
        {
        case 1:
            printf("\nDigite o titulo do livro: ");
            gets(book.titulo);
            fflush(stdin);
            printf("\nDigite o numero de paginas: ");
            scanf("%d",&book.numP);
            fflush(stdin);
            empilhar(&Pilha,book);
            break;
        case 2:
            L = desempilhar(&Pilha);
            printf("\nLivro \'%s\', %d paginas foi desempilhado com sucesso.",L.titulo,L.numP);
            break;
        case 3:
            impressaoNaoClassica(Pilha);
            break;
        case 4:
            printf("\nSaindo.");
            break;
        default:
        printf("Opcao invalida!\n");
            break;
        }
    }while(op!=4);

    return 0;
}