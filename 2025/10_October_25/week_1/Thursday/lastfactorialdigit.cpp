#include <bits/stdc++.h>
using namespace std;

int main()
{
    // hello I am habib
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 1;
        for (int i = 1; i <= n; i++)
        {
            res *= i;
        }
        cout << res % 10 << endl;
    }

    return 0;
}
