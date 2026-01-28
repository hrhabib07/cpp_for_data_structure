#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int curwhite = 0;
    for (int i = 0; i < k; i++)
        if (s[i] == 'W')
            curwhite++;

    int ans = curwhite;

    for (int i = k; i < n; i++)
    {
        if (s[i - k] == 'W')
            curwhite--;
        if (s[i] == 'W')
            curwhite++;
        ans = min(ans, curwhite);
    }

    cout << ans << endl;
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
