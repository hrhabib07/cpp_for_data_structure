#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    if (n >= 2)
    {
        a[0] = 0;
        a[1] = 1;
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
    }
    else
    {
        if (n = 1)
            a[0] = 0;
    }
    printf("%d", a[n - 1]);
}