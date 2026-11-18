#include <stdio.h>

typedef struct {
    char nome[30];
    int idade;
    float salario;
} Funcionario;

int main()
{
    // Definindo vetor de funcionarios e inserindo dados
    Funcionario funcionarios[2];
    
    for (int i = 0; i < 2; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", &funcionarios[i].nome);
        
        printf("Digite a idade do funcionario %d: ", i + 1);
        scanf("%d", &funcionarios[i].idade);
        
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
        
        printf("\n");
    }
    
    // Mostrando os dados
    
    printf("\n--== DADOS DOS FUNCIONARIOS ==--");
    for (int i = 0; i < 2; i++) {
        printf("\n--- FUNCIONARIO %d ---", i + 1);
        printf("\nNome: %s", funcionarios[i].nome);
        printf("\nIdade: %d", funcionarios[i].idade);
        printf("\nSalario: %.2f", funcionarios[i].salario);
    }
    
    // Comparando salarios
    
    float diferencaSalarial;
    if (funcionarios[0].salario > funcionarios[1].salario) {
        diferencaSalarial = funcionarios[0].salario - funcionarios[1].salario; 
        printf("\n\nO salário do 1º funcionario e maior que o do 2º com uma diferenca de: R$%.2f", diferencaSalarial);
    } else if (funcionarios[0].salario < funcionarios[1].salario) {
        diferencaSalarial = funcionarios[1].salario - funcionarios[0].salario; 
        printf("\n\nO salário do 2º funcionario e maior que o do 1º com uma diferenca de: R$%.2f", diferencaSalarial);
    } else {
        diferencaSalarial = 0;
        printf("\n\nO salário dos dois funcionario e igual com uma diferenca de: R$%.2f", diferencaSalarial);
    }

    return 0;
}
