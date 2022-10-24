#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, z, numero[100];
    printf("Digite a quantidade de numeros que voce quer guardar, que seja menor que 100\n");
    scanf("%d", &z);
    for (x = 1; x<=z; x++){
        printf("Digite o %d numero\n",x);
        scanf("%d",&i);
        numero[x] = i;
    }
    for (x = 1; x<=z; x++) {
    printf("Numero %d: %d\n", x, numero[x]);
    }
    int escolha;
    printf("deseja que eu mostre os numeros guardados pra voce?\n");
    scanf("%c",&escolha);
    if(escolha=='s'){
        printf("")
    }
    return 0;
}