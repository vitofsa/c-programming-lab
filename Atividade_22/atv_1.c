#include <stdio.h>

int main() {
    int numero;

    printf("===== ENDERECO DE NUMERO =====");
    printf("\nDigite o numero: ");
    scanf("%d", &numero);
    printf("O endereco do numero e: %p", (void*)&numero);
    printf("\nO valor do numero e: %d", numero);
    
    return 0;
}
