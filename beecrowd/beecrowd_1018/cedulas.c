#include <stdio.h>

int main(){
 int N;

 scanf("%d",&N);

printf ("%d nota(s) de R$ 100\n",N/100);
N = N % 100;

printf ("%d nota(s) de R$ 50\n",N/50);
N = N % 50;

printf ("%d nota(s) de R$ 20\n",N/20);
N = N % 20;

printf ("%d nota(s) de R$ 10\n",N/10);
N =N % 10;

printf ("%d nota(s) de R$ 5\n",N/5);
N =N % 5;

printf ("%d nota(s) de R$ 2\n",N/2);
N =N % 2;

printf ("%d nota(s) de R$ 1\n",N/1);
}