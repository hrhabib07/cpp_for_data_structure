#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> freq(n + 1, 0);
    freq[0] = 1;
    freq[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        long long res = freq[i - 1];
        long long ans = 0;
        while (res > 0)
        {
            ans += res % 10;
            res /= 10;
        }
        freq[i] = freq[i - 1] + ans;
    }

    cout << freq[n];

    return 0;
}
