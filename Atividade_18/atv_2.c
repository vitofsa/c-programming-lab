#include <stdio.h>

float maiorPreco(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    float preco1, preco2;
    
    printf("==== COMPARADOR DE PRECOS ====\n");   
    
    printf("Preco 1: ");
    scanf("%f", &preco1);
    
    printf("Preco 2: ");
    scanf("%f", &preco2);
    
    if (preco1 == preco2) {
        printf("Os precos são iguais");
        return 0;
    }
    
    printf("Maior preco: R$%.2f", maiorPreco(preco1, preco2));

    return 0;
}