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
        int mn = INT_MAX;
        while (n)
        {
            mn = min(mn, n % 10);
            n /= 10;
        }
        cout << mn << endl;
    }

    return 0;
}
