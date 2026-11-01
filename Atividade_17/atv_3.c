#include <stdio.h>
#include <string.h>

int main()
{
    char nomeInput[20], codigoCurso[11];
    char nome[20];
   
    printf("===== IDENTIFICACAO ACADEMICA =====\n");
   
    printf("Nome do estudante: ");
    scanf("%19s", nomeInput);
   
    strcpy(nome, nomeInput);
   
    printf("Codigo do curso: ");
    scanf("%10s", codigoCurso);
   
    int codigoCursoInt = 0;
    if (strcasecmp(codigoCurso, "CC") == 0) {
        codigoCursoInt = 1;
    }
   
    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nomeInput);
    printf("Curso: %s\n", (codigoCursoInt == 1) ? "Ciencia da Computacao" : "Sistemas de Informacao");
    printf("Caracteres no nome: %d\n", strlen(nomeInput));

    char output[50] = "Ola, ";
    strcat(output, nomeInput);
    printf("\n%s!", output);
    
    return 0;
}
