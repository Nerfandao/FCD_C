#include <stdio.h>
#include <stdlib.h>

int main (){
int A, B, N;
char C;

double soma, matriz [12][12];

scanf ("%d %c", &N, &C);

for (A=0; A<12; A++){
    for (B=0; B<12; B++){
        scanf ("%lf", &matriz [A][B]);
    }
}

soma = 0;

for (B=0; B<12; B++){
    soma = soma + matriz [N][B];
}
if (C =='S') {
    printf("%01.lf\n",soma);
}
else if (C =='M'){
    printf("%0.1lf\n",soma/12);
}
}