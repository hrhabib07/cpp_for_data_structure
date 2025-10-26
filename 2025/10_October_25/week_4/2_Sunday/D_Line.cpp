#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        long long base = 0;
        vector<long long> gains;
        gains.reserve(n);

        for (long long i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
            {
                base += i;                        // current contribution
                long long gain = (n - 1 - i) - i; // if we flip L->R
                if (gain > 0)
                    gains.push_back(gain);
            }
            else
            { // 'R'
                base += (n - 1 - i);
                long long gain = i - (n - 1 - i); // if we flip R->L
                if (gain > 0)
                    gains.push_back(gain);
            }
        }

        sort(gains.begin(), gains.end(), greater<long long>());

        vector<long long> ans;
        ans.reserve(n);
        long long cur = base;
        size_t j = 0;
        for (long long k = 1; k <= n; ++k)
        {
            if (j < gains.size())
            {
                cur += gains[j];
                ++j;
            }
            ans.push_back(cur);
        }

        for (int i = 0; i < (int)n; ++i)
        {
            if (i)
                cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}
