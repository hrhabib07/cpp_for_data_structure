#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    set<int> s;
    int curMx = 0;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        auto it = s.lower_bound(x);
        cout << *it << " ";
        if (it++ != s.end() && it != s.begin())
        {
            int h = *it++;
            int l = *it--;
            int newD = max(x - l, h - x);
            if (newD > curMx)
            {
                
            }
        }
    }

    return 0;
}
