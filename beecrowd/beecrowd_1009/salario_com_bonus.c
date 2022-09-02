#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    char nome;
    double sf, mt, st;
    
    scanf("%s %lf %lf", &nome, &sf, &mt);
    
    st = (15*mt)/100 + sf;

    printf("TOTAL = R$ %0.2lf\n",st);
    
    return 0;
}