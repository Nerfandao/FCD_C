#include <stdio.h>

int main() {
    double n, raio, raio2, area;
    n = 3.14159;
    scanf("%lf",&raio);
    raio2 = raio*raio;
    area = n*raio2;
    printf("A=%0.04lf\n",area);
    return 0;
}
