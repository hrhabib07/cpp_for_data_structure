#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = k - 1;
    int globSum = INT_MIN;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += v[i];
    }
    while (r < n)
    {
        globSum = max(sum, globSum);
        if (r >= n - 1)
            break;
        sum -= v[l];
        sum += v[r + 1];
        l++;
        r++;
    }

    // for (int i = k; i < n; i++)
    // {
    //     sum += v[i] - v[i - k];
    //     globSum = max(sum, globSum);
    // }
    cout << globSum << nl;
    return 0;
}
