#include <stdio.h>

int main()
{
    int numero, par = 0, impar = 0, positivo = 0, negativo = 0, x;
    for (x = 1; x <= 5; x++)
    {
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            par++;
        }
        if (numero % 2 != 0)
        {
            impar++;
        }
        if (0 < numero)
        {
            positivo++;
        }
        if (0 > numero)
        {
            negativo++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
}