#include <stdio.h>
#include <stdlib.h>

main () {
    int a;
    int *p;

    a = 5
    p = &a;
    *p = 6;
    /*Variável Inteiro*/
    int a;
    /*Variável ponteiro para inteiro*/
    int *p;
    /*a receber o valor 5*/
    a = 5;
    /*p recebe o endereço de a (diz-se p aponta para a)*/
    p = &a;
    /*conteúdo de p recebe o valor 6*/
    *p = 6;
    
}