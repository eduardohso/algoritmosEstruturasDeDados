#include "stdio.h"
#include "stdlib.h"

#include "biblioteca.h"

int main(){
    No* ptrL;
    Disciplina disciplina;
    char codigo[10];
    int op;
    ptrL=inicializarLista(ptrL);

    do{
        printf("\nEscolha uma opcao:");
        printf("\n1 - Inserir disciplina");
        printf("\n2 - Remover disciplina");
        printf("\n3 - Exibir disciplinas");
        printf("\n4 - Sair\n");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nInsira o nome da disciplina: ");
            gets(disciplina.nome);
            fflush(stdin);

            printf("\nInsira o codigo da disciplina: ");
            gets(disciplina.codigo);
            fflush(stdin);
            
            printf("\nInsira o numero de creditos da disciplina: ");
            scanf("%d",&disciplina.creditos);
            fflush(stdin);

            printf("\nInsira a carga horaria da disciplina: ");
            scanf("%d",&disciplina.cargaH);
            fflush(stdin);

            ptrL=inserirFim(ptrL,disciplina);
            
            break;
        case 2:
            printf("\nInsira o codigo da disciplina que deseja remover: ");
            gets(codigo);
            fflush(stdin);
            ptrL=removerDisciplina(ptrL,codigo);

            break;
        case 3:
            imprimir(ptrL);

            break;
        case 4:
            printf("Saindo");

            break;
        default:
            break;
        }
    }while(op!=4);

    return 0;
}