#include <stdio.h>

int main () {
    int x, i;

    scanf("%d",&x);

    for(i=1;i<=x*4;i+=4){
        printf("%d ",i);
        printf("%d ",i+1);
        printf("%d ",i+2);
        printf("PUM\n");
     }

}