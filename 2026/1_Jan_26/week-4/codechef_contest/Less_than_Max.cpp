#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> count(n + 2, 0);
    for (int x : a)
    {
        if (x == 1)
        {
            count[1]++;
        }
        else if (count[x - 1] > 0)
        {
            count[x]++;
        }
    }

    int ans = accumulate(count.begin(), count.end(), 0);
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