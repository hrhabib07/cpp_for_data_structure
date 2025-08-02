#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    };

    long long ans = INT_MIN;
    long long sum = 0;
    int l = 0, r = (k - 1);
    for (int i = l; i <= r; i++)
    {
        sum += a[i];
    }
    while (r < n)
    {
        ans = max(ans, sum);
        if (r == n - 1)
            break;
        sum -= a[l];
        sum += a[r + 1];
        l++;
        r++;
    }
    cout << ans;
    return 0;
}
