#include <stdio.h>

int main()
{
    float notas[4][4] = {0};
    float medias[4] = {0};
    float notastotal = 0;

    for (int m = 0; m < 4; m++)
    {
        printf("Informe as 4 notas do aluno %d\n", m + 1);
        for (int n = 0; n < 4; n++)
        {
            scanf("%f", &notas[m][n]);
            notastotal += notas[m][n];
        }
        medias[m] = notastotal / 4;
        notastotal = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("A media do aluno %d foi: %0.1f\n", i + 1, medias[i]);
    }
}
