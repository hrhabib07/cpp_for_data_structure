#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';
void solve()
{

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    long long cntFirst[26] = {0};
    long long cntSecond[26] = {0};
    long long cntPair[26][26] = {0};

    long long ans = 0;

    for (int i = 0; i < n; ++i)
    {
        int x = s[i][0] - 'a';
        int y = s[i][1] - 'a';
        long long sameFirstDiffSecond = cntFirst[x] - cntPair[x][y];
        long long sameSecondDiffFirst = cntSecond[y] - cntPair[x][y];

        ans += sameFirstDiffSecond + sameSecondDiffFirst;

        cntFirst[x]++;
        cntSecond[y]++;
        cntPair[x][y]++;
    }

    cout << ans << "\n";
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
