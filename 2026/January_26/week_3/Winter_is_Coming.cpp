#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int count = 0;
    bool isWearing = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < a && !isWearing)
        {
            count++;
            isWearing = true;
        }
        if (x > b && isWearing)
        {
            isWearing = false;
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
