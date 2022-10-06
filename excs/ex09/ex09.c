#include <stdio.h>
#include <stdlib.h>

int num1 (int x, int y)
{
    return x+y;
}
int menor (int a, int b)
{   
    if (a<b){
        return a;
    }
    else if{
        return b;
    }
    else if(a==b){
        printf("Eles sao iguas")
    }


    return -1;
}
int main ()
{
    int resultadomenor,resultadosoma;
    resultadosoma = num1(10,20);
    printf("A Soma e = %d\n", resultadosoma);
    resultadomenor = menor(20,20);
    printf("Menor resultado e = %d\n", resultadomenor);
}