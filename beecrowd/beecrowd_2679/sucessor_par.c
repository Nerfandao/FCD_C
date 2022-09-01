#include <stdio.h>
 
int main() {
    int X, par;
    
    scanf("%d",&X);
    
    if (X%2 == 0) {
        par = X+2;
    }
    
    else {
        par = X+1;
    }
    
    printf ("%d\n",par);
    return 0;
}