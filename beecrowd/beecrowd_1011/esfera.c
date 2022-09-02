#include <stdio.h>
 
int main() {
    double raio, raio3, volume;
    
    scanf("%lf", &raio);
    
    raio3 = raio * raio * raio;
    volume = (4.0/3.0) * 3.14159 * raio3;
    
    printf("VOLUME = %0.3lf", volume);
    
    return 0;
}