#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> c(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int curCap = n - 1;
    int res = 0;
    while (curCap >= 0)
    {
        auto it = min_element(c.begin(), c.end());
        int minValue = *it;
        int minIndex = it - c.begin();
        if (minIndex > curCap)
        {
            c[minIndex] = INT_MAX;
            continue;
        }
        for (int i = minIndex; i <= curCap; i++)
        {
            res += minValue * a[i];
        }
        c[minIndex] = INT_MAX;
        curCap = minIndex - 1;
        if (minIndex == 0)
        {
            curCap = -1;
        }
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
