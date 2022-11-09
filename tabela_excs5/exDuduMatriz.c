#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma, i, j, cont;
    double m[12][12], num;
    char operacao;

    soma = 0;

    for (i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("lf",&num);
        }
    }

    if (operacao == 'S'){
        for (i = 0; i < 12; i++){
            for (j = 0; j < 12; j++){
                soma += m[i][j];
            }
        }
        printf("%.1lf\n", soma);
    }
    if (operacao == 'N')
    {
        for (i = 0; i < 12; i++){
            for (j = 0; j < 12; j++){
                if (i < j && i > 12 - j - 1)
                {
                    media += m[i][j]
                    cont++;
                }
                printf("%.1lf\n", media/cont);
            }
        }
    }
}

typedef struct banda{
    char nome[100];
    char estilo[25];
    int membros;
    int rank;
}
banda.nome = Tiago;
banda.estilo = Rock;
banda.membros = 6;
banda.rank = 1;


    



