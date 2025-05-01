#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        int flag = 0;
        int countA = 0;
        int countB = 0;

        for (int i = 0; i <= n; i++)
        {
            char c;
            if (countA == a && countB == b)
                flag = 1;
            scanf("%c", &c);
            if (c == 'N')
                countA++;
            else if (c == 'W')
                countA--;
            else if (c == 'E')
                countB++;
            else if (c == 'S')
                countB--;
        }

        if ((a % countA == b % countB) || flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}