#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> pos(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            pos[x] = i;
        }

        ll res = 0;
        set<int> ocst;
        for (int i = 1; i <= n; ++i)
        {
            ocst.insert(i); 
        }

        for (int personN = n; personN >= 1; personN--)
        {
            int curSt = pos[personN]; 
            int left = distance(ocst.begin(),
                                      ocst.lower_bound(curSt));
            
            int right = distance(ocst.upper_bound(curSt),
                                       ocst.end());

            res += min(left, right);

            ocst.erase(curSt);
        }

        cout << res << endl;
    }

    return 0;
}