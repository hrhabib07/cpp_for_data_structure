#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int div = (abs(k) + p - 1) / p;
        if (div <= n)
        {
            cout << div << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}