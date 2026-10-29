#include <stdio.h>

int main()
{
    char palavra[20];
   
    printf("Digite uma palavra: ");
    scanf("%19s", palavra);
   
    int totalLetras = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        totalLetras++;  
    }
   
    printf("Total de letras da sua palavra: %d", totalLetras);

    return 0;
}
