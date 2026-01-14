#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

bool isOdd(long long x)
{
    return x % 2 == 1;
}

bool checkOdd(long long x)
{
    while (x)
    {
        if ((x % 10) % 2 == 1)
            return true;
        x /= 10;
    }
    return false;
}

void solve()
{
    string s;
    cin >> s;
    long long n = stoll(s);

    if (n % 2 == 1)
    {
        cout << 0 << '\n';
        return;
    }

    if (checkOdd(n))
    {
        cout << 1 << '\n';
        return;
    }
    if (s.size() == 1)
    {
        cout << -1 << '\n';
        return;
    }

    set<int> digits;
    for (char c : s)
    {
        digits.insert(c - '0');
    }

    bool found2 = false;
    for (int d : digits)
    {
        if (d == 0)
            continue;
        long long n1 = n - d;
        if (n1 <= 0)
            continue;
        if (checkOdd(n1))
        {
            found2 = true;
            break;
        }
    }

    if (found2)
    {
        cout << 2 << '\n';
    }
    else
    {
        cout << 3 << '\n';
    }
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
