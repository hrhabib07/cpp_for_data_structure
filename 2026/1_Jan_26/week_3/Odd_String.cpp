#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;

    bool possible = true;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 2)
        {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << '\n';
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
