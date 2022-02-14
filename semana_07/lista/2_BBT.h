void impressaoClassica(NO *topo){
    NO *aux;
    while(!vazia(topo)){
        aux = topo;
        printf("O prato tem cor: %s, tamanho: %s, do tipo: %s.\n",topo->info.cor,topo->info.tamanho,topo->info.tipo );
        topo=aux->prox;
        desalocarNo(aux);
    }
}