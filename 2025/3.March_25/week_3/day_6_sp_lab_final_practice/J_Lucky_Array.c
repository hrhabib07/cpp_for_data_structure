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
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            count = 1;
        }

        else if (a[i] == min)
            count++;
    }
    if (count % 2 != 0)
        printf("Lucky\n");
    else
        printf("Unlucky");
}