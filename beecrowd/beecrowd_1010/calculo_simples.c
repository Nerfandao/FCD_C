#include <stdio.h>
 
int main() {
    int cpeca1, qpeca1, cpeca2, qpeca2;
    double vpeca1, vpeca2, total;
    
    scanf("%d %d %lf", &cpeca1, &qpeca1, &vpeca1);
    scanf("%d %d %lf", &cpeca2, &qpeca2, &vpeca2);
    
    total = (qpeca1*vpeca1) + (qpeca2*vpeca2);
    
    printf("VALOR A PAGAR: R$ %0.2lf\n",total);
    
    return 0;
}