#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> pre(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            cout << pre[r - 1] << endl;
        else
            cout << pre[r - 1] - pre[l - 2] << endl;
    }

    return 0;
}
