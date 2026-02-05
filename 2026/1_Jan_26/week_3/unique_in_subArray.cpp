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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0;
    map<int, int> mp;
    int ans = 0, cur = 0;

    while (r < n)
    {
        int val = v[r]; 
        mp[val]++;
        cur++;

        if (mp[val] > 1)
        {
            int ind = -1;
            for (int i = l; i < r; i++)
            {
                if (v[i] == val)
                {
                    ind = i;
                    break;
                }
                else
                {
                    mp[v[i]]--;
                }
            }
            l = ind + 1;
            cur = r - l + 1;
        }

        ans = max(ans, cur);
        r++;
    }

    cout << ans << endl;
    return 0;
}
