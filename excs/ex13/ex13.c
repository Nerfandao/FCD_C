#include <stdio.h>
#include <stdlib.h>

float somafrac (int n) {
    if (n == 1) {
        return n;
    }
    else {
        return ((float)1/n) + somafrac(n-1);
    }
}

int main () {
    printf("%f\n",somafrac(4, 1));
    return 0;
}