#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int t;
    cin >> n;
    cin >> t;
    set<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> r(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        r[i] = s.size();
        // cout << r[i] << " ";
    }
    // cout << endl;
    while (t--)
    {
        int nw;
        cin >> nw;
        cout << r[nw - 1] << endl;
    }

    return 0;
}
