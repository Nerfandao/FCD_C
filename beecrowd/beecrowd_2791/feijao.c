#include <stdio.h>
 
int main() {
    int c1=0,c2=0,c3=0,c4=0;
    
    scanf("%d %d %d %d", &c1, &c2, &c3, &c4);

    if (c1!=0) 
        printf("1\n");
    else if (c2!=0)
        printf("2\n");
    else if (c3!=0)
        printf("3\n");
    else if (c4!=0)
        printf("4\n");
    
    return 0;
    
}