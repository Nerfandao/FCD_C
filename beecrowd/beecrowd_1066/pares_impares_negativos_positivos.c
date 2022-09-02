#include <stdio.h>
 
int main() {
    int numero, par, impar, positivo, negativo;
    scanf("%d %d %d %d %d",&numero);
    if (numero%2==0){
        par;
    }
    if (numero%2==1){
        impar;
    }
    if (0<numero){
        positivo;
    }
    if (0>numero){
        negativo;
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",positivo);
    printf("%d valor(es) negativo(s)\n",negativo);
    return 0;
}