#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n;
        cin >> n;
        if (n > 3)
        {
            sum = 3;
            while (n > 3)
            {
                n = n - n % 5;
                if (n % 3 == 0 && n % 5)
                {
                    sum++;
                };
                n -= 5;
            }
        }
        else
        {
            if (n == 2)
                sum = 3;
            else if (n == 1)
                sum = 2;
            else if (n == 0)
                sum = 1;
        }
        cout << sum << endl;
    }
    return 0;
}