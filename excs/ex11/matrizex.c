#include <stdio.h>

int main()
{
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos[4][4] = {0};
    float mediasAlunos[4] = {0};

    float media = 0;

    printf("Insira as 4 notas do aluno 1:\n");

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno)
    {
        for (int notas = 0; notas < bimestresAnuais; ++notas)
        {
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;
        printf("Insira as 4 notas do aluno %d:\n", aluno + 2);
    }

    for (int aluno = 0; aluno < 4; ++aluno)
    {
        printf("A media do aluno %d eh %.2f\n", aluno + 1, mediasAlunos[aluno]);
    }
}