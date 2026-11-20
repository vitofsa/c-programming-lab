#include <stdio.h>

int main() {
    char nome[50];
    int matricula;

    FILE *arquivo;
    arquivo = fopen("funcionarios.txt", "w");

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do funcionario: ");
        scanf("%s", nome);

        printf("Digite a matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s | Matricula: %d\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");

    return 0;
}
