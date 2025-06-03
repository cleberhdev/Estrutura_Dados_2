//Método no casio ele busca o elemento, ou retorna 0(false), 1((true)
int buscar(Arv *a, char c){
    if(a == NULL){
        return 0;
    }else{
        return a->conteudo || buscar(a->sae, c) || buscar(a->sad,c);
    }
}
//obs: implemente depois
//obs: olhe o método exibir para ver sobre recursividade