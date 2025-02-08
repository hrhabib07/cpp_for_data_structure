#include <stdio.h>

int main() {
    int A, B, sum;
    scanf("%d %d", &A, &B);
    
    sum = A + B;

    for (int i = 0; i <= 9; i++) {
        if (i != sum) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
