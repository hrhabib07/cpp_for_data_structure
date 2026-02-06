#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> v(n);
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, ans = 0, cur = 0;
    for (int r = 0; r < n; r++)
    {
        ans = max(cur, ans);
        cur++;
        int val = v[r];
        if (mp[val] != 1)
            mp[val]++;
        else
        {
            while (v[l] != val)
            {
                mp[v[l]]--;
                l++;
                cur--;
            }
            mp[val] = 1;
            l++;
            cur--;
        }
    }
    cout << max(ans, cur);
    return 0;
}
