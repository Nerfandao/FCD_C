#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3, MaiorAB, MaiorABS;

    scanf("%d %d %d", &valor1, &valor2, &valor3);

    MaiorAB = ((valor1 + valor2 + abs(valor1 - valor2)) / 2);
    MaiorABS = ((MaiorAB + valor3 + abs(MaiorAB - valor3)) / 2);

    printf("%d eh o maior\n", MaiorABS);

    return 0;
}