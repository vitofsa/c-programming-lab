#include <stdio.h>

int verificarPar(int n) {
    return n % 2 == 0;
}

int main()
{
    int numero;
    
    printf("==== VERIFICADOR DE NUMEROS ====\n");   
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("O numero %d é %s", numero, verificarPar(numero) ? "Par" : "Impar");

    return 0;
}