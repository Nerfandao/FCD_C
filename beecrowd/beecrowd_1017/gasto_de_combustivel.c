#include <stdio.h>
#include <stdlib.h>

int main() {
    int hr, km;
    float ql, kmf;
    kmf = 12.0;
    scanf("%d %d",&hr, &km);
    ql = km/kmf*hr;
    printf("%0.3f\n",ql);

    return 0;
}
