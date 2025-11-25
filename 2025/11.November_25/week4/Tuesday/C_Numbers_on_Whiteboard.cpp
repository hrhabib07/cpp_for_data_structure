#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;
        int x = n;
        for (int i = n - 1; i > 0; i--)
        {
            cout << i << " " << x << nl;
            x = (i + x + 1) / 2;
        }
    }

    return 0;
}
