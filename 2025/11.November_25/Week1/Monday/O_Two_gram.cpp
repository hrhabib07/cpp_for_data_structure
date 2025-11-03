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
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 1; i < n; i++)
    {
        string sub = "";
        sub += s[i - 1];
        sub += s[i];
        mp[sub]++;
    }

    pair<string, int> res = {"", 0};
    for (auto [first, sec] : mp)
    {
        if (sec > res.second)
        {
            res = {first, sec};
        }
        // cout << first << " " << second << endl;
    }
    cout << res.first << endl;

    return 0;
}
