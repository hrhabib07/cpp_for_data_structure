#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll curr = 0;
    int l = 0;
    ll count = 0;

    for (int r = 0; r < n; r++)
    {
        curr += v[r];

        while (curr > x && l <= r)
        {
            curr -= v[l];
            l++;
        }

        if (curr == x)
            count++;
    }

    cout << count << '\n';
    return 0;
}
