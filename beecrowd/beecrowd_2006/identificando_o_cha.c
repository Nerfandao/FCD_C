#include <stdio.h>

int main(){

   int i, resposta, palpite, contador = 5, acertos = 0;

   scanf("%d", &resposta);

   for(i=1;i<=5;i++){
        scanf("%d", &palpite);
        if (resposta == palpite) acertos++;
   }

   printf("%d\n", acertos);

    return 0;
}