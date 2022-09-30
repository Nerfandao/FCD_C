#include <stdio.h>


 int main(){
    int notas, qtd;

    scanf("%d", &notas);

    printf("%d\n", notas);
    printf("%d nota(s) de R$ 100,00\n", notas/100);
    qtd = (notas%100);

    printf("%d nota(s) de R$ 50,00\n", qtd/50);
    qtd = (qtd%50);

    printf("%d nota(s) de R$ 20,00\n", qtd/20);                                                                                                                        
    qtd = (qtd%20);

    printf("%d nota(s) de R$ 10,00\n", qtd/10);
    qtd = (qtd%10);

    printf("%d nota(s) de R$ 5,00\n", qtd/5);
    qtd = (qtd%5);

    printf("%d nota(s) de R$ 2,00\n", qtd/2);
    qtd = (qtd%2);

    printf("%d nota(s) de R$ 1,00\n", qtd/1);
    return 0;
 }