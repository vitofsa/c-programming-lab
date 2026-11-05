#include <stdio.h>

void mostrarMenu(){
    printf("==== CALCULADORA ====");
    printf("\n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n0. Sair\n");
    printf("=====================");
}

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}

int main()
{
    int escolha;
    
    while (escolha != 0) {
        mostrarMenu();
        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);
        
        if (escolha == 0) {
            return 0;
        }
        
        int pNumero, sNumero, resultado;
        
        printf("\nPrimeiro numero: ");
        scanf("%d", &pNumero);
        
        printf("\nSegundo numero: ");
        scanf("%d", &sNumero);
        
        switch (escolha) {
            case 1:
                resultado = somar(pNumero, sNumero);
                break;
            case 2:
                resultado = subtrair(pNumero, sNumero);
                break;
            case 3:
                resultado = multiplicar(pNumero, sNumero);
                break;
            case 4:
                resultado = dividir(pNumero, sNumero);
                break;
            default:
                printf("Erro, opcao errada!");
                return 0;
                break;
        }
        
        printf("\n---> Resultado: %d\n\n", resultado);
    }
    
    

    return 0;
}