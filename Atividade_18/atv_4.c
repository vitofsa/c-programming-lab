#include <stdio.h>

int dobro(int n) {
    return n * 2;
}

int main()
{
    int qtdEstoque;
    
    printf("==== CONTROLE DE ESTOQUE ====\n");   
    
    printf("Quantidade inicial: ");
    scanf("%d", &qtdEstoque);
    
    printf("Quantidade apos duplicação: %d", dobro(qtdEstoque));

    return 0;
}