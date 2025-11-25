#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = n;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == s[j])
            break;
        else
            res -= 2;
        i++;
        j--;
    }
    cout << res << endl;
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
