#include <stdio.h>
 
int main() {
    int km;
    double lt, kml;

    scanf("%d %lf", &km, &lt);
    
    kml = km/lt;
    
    printf("%0.3lf km/l\n",kml);
    
    return 0;
}