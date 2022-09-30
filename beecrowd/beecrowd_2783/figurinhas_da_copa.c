#include <stdio.h>

int main() {
    
    int n, c, m, i = 0, j = 0;
    scanf("%d %d %d ", &n, &c, &m);
    
    int carimbadas[c], r = c, compradas[m];
    while (j < c)
        scanf("%d", &carimbadas[j++]);

    while (i < m)
        scanf("%d", &compradas[i++]);
    
    for (j = 0; j < c; j++) {
        for (i = 0; i < m; i++) {
            if (carimbadas[j] == compradas[i]) {
                r--;
                break;
            }
        }
    }
    
    printf("%d\n", r);

    return 0;
}