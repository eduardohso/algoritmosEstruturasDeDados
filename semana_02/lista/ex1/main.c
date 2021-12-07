#include "stdio.h"
#include "stdlib.h"

#include "biblioteca.h"

int main(){
    int op,busca;
    char nome[25];
    Playlist p;
    inicializarLista(&p);
    Musica m;
        do{

            printf("\nInsira uma opcao:\n");
            printf("1 - Cadastrar musica\n");
            printf("2 - Pesquisar musica pelo nome\n");
            printf("3 - Remover musica\n");
            printf("4 - Exibir playlist\n");
            printf("5 - Sair\n");

            scanf("%d",&op);
            fflush(stdin);

            switch (op){
                case 1:
                    system("cls");
                    printf("Digite o Nome da Musica:\n");
                    fflush(stdin);
                    gets(m.nome_musica);
                    fflush(stdin);
                    printf("Digite o nome do cantor:\n");
                    fflush(stdin);
                    gets(m.cantor);
                    fflush(stdin);
                    printf("Digite a duracao em minutos:\n");
                    scanf("%d",&m.duracao_min);
                    fflush(stdin);
                    printf("Digite a duracao em segundos:\n");
                    scanf("%d",&m.duracao_seg);
                    fflush(stdin);
                    if(cadastraMusica(&p, m)){
                        printf("Insercao deu certo!\n");
                    }else{
                        printf("Elemento nao inserido!\n");
                    }
                    fflush(stdin);
                    break;
                case 2:
                    printf("Digite o nome da musica que deseja buscar:\n");
                    fflush(stdin);
                    gets(nome);
                    fflush(stdin);
                    busca = buscarMusica(&p,nome);
                    if(busca>=0){
                        printf("O elemento esta na posicao: %d\n",busca);
                    }else{
                        printf("Elemento nao encontrado!\n");
                    }
                    break;
                case 3:
                    removerDaLista(&p);
                    break;
                case 4:
                    imprimir(&p);
                    break;
                default:
                    break;
            }
        }while(op!=5);
}
