#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        qsort(b, n, sizeof(int), cmp);

        
        for (int i = 0; i < n; i++) {
            c[i] = abs(a[i] - b[i]);
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}
