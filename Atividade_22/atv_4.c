#include <stdio.h>

int dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int numero;

    printf("===== ENDERECO DE NUMERO =====");
    printf("\nDigite o numero: ");
    scanf("%d", &numero);

    dobrar(&numero);
    printf("\nO valor do numero dobrado e: %d", numero);
    
    return 0;
}
