#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }
        int sqr = sqrt(n);
        if ((sqr * sqr) == n)
            cout << 2 * count - 1 << endl;
        else
            cout << 2 * count << endl;
    }

    return 0;
}
