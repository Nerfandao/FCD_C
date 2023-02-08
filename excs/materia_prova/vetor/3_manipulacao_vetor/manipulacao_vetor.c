#include <stdio.h>

int main()
{
    float notas[5] = {0};
    float total;
    float media;

    printf("Insira 5 notas:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        total += notas[i];
    }

    media = total / 5;

    printf("A Media do aluno e: %0.1f", media);

    return 0;
}