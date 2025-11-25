#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long ans = 0;
    int active = 0;
    int prev = -1;

    int i = 0;
    while (i < n)
    {
        int v = a[i];
        int c = 0;

        while (i < n && a[i] == v)
        {
            ++c;
            ++i;
        }

        if (prev == -1 || v != prev + 1)
        {
            active = 0;
        }

        if (c > active)
        {
            ans += (c - active);
        }

        active = c;
        prev = v;
    }

    cout << ans << '\n';
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
