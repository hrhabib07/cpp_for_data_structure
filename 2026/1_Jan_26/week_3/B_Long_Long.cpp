#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
            v.push_back(x);

        sum += abs(x);
    }
    int maxOp = 0, k = v.size();
    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
        {
            maxOp++;
            while (v[i] < 0)
            {
                i++;
            }
        }
    }
    cout << sum << " " << maxOp << endl;
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
