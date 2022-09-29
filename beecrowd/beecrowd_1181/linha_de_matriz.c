#include <stdio.h>
#include <stdlib.h>

int main (){
int A, B, N, soma;
char C;

double matriz [12][12];

scanf ("%d %c", &N, &C);

for (A=0; A<12; A++){
    for (B=0; B<12; B++){
        scanf ("%lf", &matriz [A][B]);
    }
}
for (B=0; B<12; B++){
    soma = soma + matriz [N][B];
}
if (C=S) {
    printf("%d\n",soma);
}
else if (C=M){
    printf("%d\n",soma/12);
}
}