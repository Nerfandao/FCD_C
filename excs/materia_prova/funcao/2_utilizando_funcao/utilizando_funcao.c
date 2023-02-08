#include <stdio.h>

int main()
{
    float calcularAreaRetangulo(float x, float y);

    float area = calcularAreaRetangulo(10.0, 20.0);

    printf("%f", area);

    return 0;
}

float calcularAreaRetangulo(float base, float altura)
{
    float area = base * altura;

    return area;
}