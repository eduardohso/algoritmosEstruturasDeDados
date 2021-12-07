#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct sMusica
{
    int duracao_min,duracao_seg;
    char nome_musica[25], cantor[25];
}Musica;

typedef struct sPlaylist
{   
    int n;
    Musica musica[MAX];
}Playlist;

void inicializarLista(Playlist *ptr){
    ptr -> n = 0;
}

int listaCheia(Playlist *ptr){
    if (ptr -> n+1==MAX){
        return 1;
    }else
    {
        return 0;
    }
}

int listaVazia(Playlist *ptr){
    if (ptr -> n==-1){
        return 1;
    }else
    {
        return 0;
    }
}

int cadastraMusica(Playlist *ptr,Musica music){
    int i;
    if(listaCheia(ptr)){
        printf("Lista cheia! Nao e possivel cadastrar mais musicas\n");
        return 0;
    }
    for(i=ptr->n+1;i>=0;i--){
        if(i==0){
            ptr->musica[0]=music;
            ptr->n++;
            return 1;
        }
        ptr->musica[i]=ptr->musica[i+1];
    }
    return 0;
}

void imprimir(Playlist *ptr){
    if(listaVazia(ptr)){
        printf("A lista esta vazia!\n");
    }
    printf("Lista:\n");
    int i;
    for(i=0;i<=ptr->n;i++){
        printf("%s", ptr->musica[i].nome_musica);
        printf("%s",ptr->musica[i].cantor);
        printf("%d %d\n",ptr->musica[i].duracao_min,ptr->musica[i].duracao_seg);
    }
}

int removerDaLista(Playlist*ptr){
    if(listaVazia(ptr)){
        printf("Erro! lista vazia");
        return 0;
    }
    ptr->n--;
    return 0;
}

int buscarMusica(Playlist *ptr,char nome[21]){
    int i = 0;
    if(listaVazia(ptr)){
        printf("Erro! lista vazia");
        return 0;
    }
   for(i=0;i<=ptr->n;i++){
        if(strcmp(ptr->musica[i].nome_musica,nome)==0){
            return i;
        }else if(i == ptr->n){
            return 0;
        }
    }
    return 0;
}
