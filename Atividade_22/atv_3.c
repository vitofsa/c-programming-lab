#include <stdio.h>

int main() {
    int numero = 15;
    int *ponteiro = &numero;

    printf("===== VALOR ANTES DO PONTEIRO ALTERAR =====");
    printf("\nO valor da variavel do numero e: %d", numero);

    *ponteiro = 50;

    printf("\n===== VALOR DEPOIS DO PONTEIRO ALTERAR =====");
    printf("\nO valor da variavel do numero e: %d", numero);
    
    return 0;
}
