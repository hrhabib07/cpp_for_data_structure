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
    int i1 = 0;
    int i2 = (n - 1);
    int flag = 1;
    while (i1 < i2)
    {
        if (a[i1] != a[i2])
        {
            flag = 0;
            break;
        }
        i1++;
        i2--;
    }
    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}