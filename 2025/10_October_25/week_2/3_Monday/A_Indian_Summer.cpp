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
    vector<pair<string, string>> vp;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int res = 0;
        for (auto [f, s] : vp)
        {
            if (f == s1 && s == s2)
            {
                res = 1;
                break;
            }
        }
        if (!res)
            vp.push_back({s1, s2});
    }
    cout << vp.size();
    return 0;
}
