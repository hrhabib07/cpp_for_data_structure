#include <stdio.h>
void printing(int n)
{
    if (n == 6)
    {
        printf("\n");
        return;
    }
    printf("%d ", n);
    printing(n + 1);
    printf("%d ", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printing(n);
    return 0;
}