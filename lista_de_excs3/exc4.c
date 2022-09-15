#include <stdio.h>

int main(){

int pacote1, pacote2;

scanf("%d %d",&pacote1,&pacote2);

if (pacote1>pacote2) {
    printf("O Pacote 1 e o maior!");
}
else if (pacote2>pacote1) {
    printf("O Pacote 2 e o maior!");
}
else if (pacote1==pacote2) {
    printf("Sao o mesmo peso");
}
}