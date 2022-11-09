#include <stdio.h>

int main()
{

    int notas[5]; // Alocação de 5 vetores [0, 1, 2, 3, 4]

    notas[0] = 10;
    notas[1] = 5;
    notas[2] = 8;
    notas[3] = 2;
    notas[4] = 7;

    printf("%d", notas[2]);
    return 0;
}