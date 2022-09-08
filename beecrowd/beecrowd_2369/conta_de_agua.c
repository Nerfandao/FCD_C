#include <stdio.h>
 
int main() {
    int N, X, Z, sete, total1, total2, total3;
    scanf("%d",&N);
    X = N;
    
    if (N<=10) { 
        printf("7\n");
    }    
    else if ((N>=11) && (N<=30)) {
        total1 = X-3;
        printf("%d\n",total1);
    }
    else if ((N>=31) && (N<=100)) {  
        total2 = ((X-30)*2)+27;
        printf("%d\n",total2);
    }    
    else if (N>=101) {
        total3 = ((X-100)*5)+167;
        printf("%d\n",total3);
    }
    return 0;
}