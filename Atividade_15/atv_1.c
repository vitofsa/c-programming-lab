#include <stdio.h>

int main()
{
    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    
    int totalDisp = 0, totalIndisp = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if (assentos[i][j] == 0) {
                totalDisp++;
            } else {
                totalIndisp++;
            }
        }
    }

    printf("Total Disponivel: %d \n", totalDisp);
    printf("Total Indisponivel: %d", totalIndisp);

    return 0;
}
