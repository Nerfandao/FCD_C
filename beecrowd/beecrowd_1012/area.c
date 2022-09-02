#include <stdio.h>
 
int main() {
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    triangulo = (A*C)/2;
    circulo = 3.14159*(C*C);
    trapezio = (A+B)*C/2;
    quadrado = B*B;
    retangulo = A*B;
    
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    
    return 0;
}