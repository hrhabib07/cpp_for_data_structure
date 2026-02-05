#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int rem = m - n;
    if (rem < n)
        cout << rem << endl;
    else
        cout << n << endl;
    return 0;
}
