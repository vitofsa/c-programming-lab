#include <stdio.h>
#include <string.h>

int main()
{
    char nomeInput[20], perfil[6];
    char nome[20];
   
    printf("===== CADASTRO DE USUARIOS =====\n");
   
    printf("Digite seu nome: ");
    scanf("%19s", nomeInput);
   
    strcpy(nome, nomeInput);
   
    printf("Digite seu perfil: ");
    scanf("%5s", perfil);
   
    int perfilInt = 0;
    if (strcasecmp(perfil, "ADMIN") == 0) {
        perfilInt = 1;
    }
   
    printf("===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nomeInput);
    printf("Quantidade de Caracteres: %d\n", strlen(nomeInput));
    printf("Perfil: %s\n", (perfilInt == 1) ? "Administrador" : "Comum");

    char output[50] = "\nBem vindo(a), ";
    strcat(output, nomeInput);

    printf("%s", output);
    return 0;
}
