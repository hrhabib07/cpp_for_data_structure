#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = __INT_MAX__;

    int ind = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            ind = i + 1;
            min = a[i];
        }
    }
    printf("%d %d", min, ind);
}