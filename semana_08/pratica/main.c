#include "stdio.h"
#include "stdlib.h"

#include "BBT_fila.h"

int main(){
    int op;
    Pessoa pes;
    Fila *fila;

    fila = (Fila*) malloc (sizeof(Fila));

    if(fila!=NULL){

        inic(fila);

        do{
            printf("\nSelecione uma opcao:\n");
            printf("1 - Inserir um elemento na fila.\n");
            printf("2 - Exibir os elementos da fila (nao classica).\n");
            printf("3 - Sair.\n");
            printf("\n--> ");
            scanf("%d",&op);
            fflush(stdin);
            switch (op)
            {
            case 1:
                printf("\nDigite o nome do proprietario da conta: ");
                fflush(stdin);
                gets(pes.nome);
                fflush(stdin);

                printf("\nEspecifique a atividade bancaria: \n");
                printf("--> S para sacar \n");
                printf("--> D para depositar\n");
                printf("--> P para efetuar pagamento\n");
                printf("\n--> ");
                scanf("%c", &pes.opBancaria);

                enfileirar(fila,pes);
                break;
            case 2:
                impressaoNaoClassica(fila);
                break;
            default:
                printf("Saindo.\n");
                break;
            }
        }while(op!=3);
    }
    return 0;
}