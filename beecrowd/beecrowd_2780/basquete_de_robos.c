#include <stdio.h>

int main() {

    int D;

    scanf("%d",&D);

    if (D <= 800){
        printf("1pts\n");
    }
    else
        if ((800 < D) && (D <= 1400)){
        printf("2pts\n");
    }
    else
        if ((1400 < D) && (D <= 2000)){
        printf("3pts\n");
    }

return 0;

}
