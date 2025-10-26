#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                v[i] = i;
            }
            else
            {
                sum += n - i - 1;
                v[i] = n - i - 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int prof = 0;
            if (s[i] == 'L')
                prof = n - i - 1;
            else
                prof = i;
            if (prof > v[i])
                cout << prof + sum << " ";
            else
                cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}
