#include <stdio.h>
#include <string.h>

int main()
{
    char nomeInput[20], categoria[11];
    char nome[20];
   
    printf("===== CADASTRO DE PRODUTOS =====\n");
   
    printf("Digite o nome do produto: ");
    scanf("%19s", nomeInput);
   
    strcpy(nome, nomeInput);
   
    printf("Digite sua categoria: ");
    scanf("%10s", categoria);
   
    int categoriaInt = 0;
    if (strcasecmp(categoria, "HARDWARE") == 0) {
        categoriaInt = 1;
    }
   
    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nomeInput);
    printf("Caracteres: %d\n", strlen(nomeInput));
    printf("Categoria: %s\n", (categoriaInt == 1) ? "Hardware" : "Periferico");

    char desc[50] = "Produto: ";
    strcat(desc, nomeInput);
    printf("\nDescricao:  %s", desc);
    
    printf("\nCadastro concluido!");
    return 0;
}
