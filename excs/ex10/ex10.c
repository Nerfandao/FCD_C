#include <stdio.h>
#include <stdlib.h>

int somaVetor (int tam, int lista[])
{   
    int i;
    int soma = 0;
    for (i=0;i<tam;i++) {
        soma = soma + lista[i];
    }
    return soma;
}
int main ()
{   
    int notas [] = {5,4,2,10,2,9,2};
    printf("%d", somaVetor(7, notas));
}