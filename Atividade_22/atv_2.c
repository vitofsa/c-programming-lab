#include <stdio.h>

int main() {
    int numero = 20;
    int *ponteiro = &numero;

    printf("===== NUMERO PELO PONTEIRO =====");
    printf("\nO endereco da variavel do numero e: %p", (void*)&numero);
    printf("\nO valor da variavel do numero e: %d", numero);
    printf("\nO valor da variavel do ponteiro e: %d", *ponteiro);
    
    return 0;
}
