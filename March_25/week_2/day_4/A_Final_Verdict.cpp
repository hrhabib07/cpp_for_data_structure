#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    long long sum = 0;
    string s = "NO";
    for (int i = 0; i < n; i++)
    {

        int v;
        cin >> v;
        sum += v;
    }
    // cout << sum << endl;
    if ((sum % n == 0) && (sum / n == x))
        s = "YES";
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
