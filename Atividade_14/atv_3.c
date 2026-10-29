#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    
    int totalSoma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            totalSoma += matrix[i][j];
        }
    }

    printf("Soma total: %d", totalSoma);

    return 0;
}
