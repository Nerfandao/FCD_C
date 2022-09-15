#include <stdio.h>

int main(){
int valor,i,qtdNotas,notas[]={100,50,20,10,5,2,1};

scanf("%d",&valor);

printf("%d\n",valor);

for (i=0;i<7;i++){
    qtdNotas=valor/notas[i];
    valor=valor&notas[i];
    printf("%d nota(s) de %d,00\n",qtdNotas,notas[i]);
}
return 0;
}