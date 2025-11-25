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
        cin >> a[i];

    set<int> s;
    int ans = 1;
    int L = 0;
    for (int i = 0; i < n; ++i)
    {
        s.erase(a[i]);
        if (s.empty())
        {
            ans++;
            for (int j = L; j <= i; ++j)
                s.insert(a[j]);

            L = i + 1;
        }
    }

    if (!s.empty())
        ans--;

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
