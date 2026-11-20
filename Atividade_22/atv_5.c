#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};

    int *ponteiro = vetor;

    for (int i = 0; i < 5; i++) {
        printf("O valor do vetor na posicao %d e: %d\n", i, *(ponteiro + i));
    }
    
    return 0;
}
