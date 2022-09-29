#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int i,j,n,matriz[5][5];

    srand(time(NULL));

    for (i=0;i<5;i++) {
        for (j=0;j<5;j++){
            matriz[i][j] = rand();
        }
    }
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}