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
    int i = 0, j = n - 1;
    int count = 0;
    while (i < j)
    {
        if (s[i] == s[j])
            break;
        else
            count++;
        i++; j--;
    }
    cout << n - (count * 2) << endl;
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
