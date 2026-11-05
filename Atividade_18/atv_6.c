#include <stdio.h>

int calcularFatorial(int n) {
    int r = 1;
    for (int i = 0; i < n; i++) {
        r += r * i;
    }
    return r;
}

int main()
{
    int numero;
    
    printf("==== CALCULADORA DE FATORIAL ====\n");   
    
    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("É necessário ser não-negativo");    
        return 0;
    } else if (numero > 12) {
        printf("É necessário estar entre 0 e 12");    
        return 0;
    }
    
    printf("Fatorial de %d: %d", numero, calcularFatorial(numero));

    return 0;
}