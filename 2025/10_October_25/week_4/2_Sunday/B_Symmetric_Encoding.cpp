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
        string s2 = s;
        sort(s2.begin(), s2.end());
        for (int i = 0; i < n / 2; i++)
        {
            char temp = s2[i];
            s2[i] = s2[n - 1 - i];
            s2[n - 1 - i] = temp;
        }

        // vector<int> freq(26, 0);
        // for (int i = 0; i < n; i++)
        // {
        //     freq[s[i] - 'a']++;
        // }
        // for (int i = 0; i < 26; i++)
        // {
        //     if (freq[i] > 0)
        //         s2 += (char)'a' + i;
        // }
        // // int ind = n - 1;
        // // for (int i = 0; i < s2.size(); i++)
        // // {
        // //     if (s2.size() - 1 - i >= 0)
        // //     {
        // //         s[i] = s2[s2.size() - 1 - i];
        // //     }
        // // }

        // // for (int i = s2.size(); i >= 0; i--)
        // // {
        // // }

        cout << s2 << endl;
    }

    return 0;
}
