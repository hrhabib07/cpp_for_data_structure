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
        string s;
        cin >> s;
        int n = s.size();
        bool instered = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                s.insert(i, 1, s[i] == 'a' ? 'b' : 'a');
                instered = true;
                break;
            }
        }
        if (!instered)
        {
            s += (s[n - 1] == 'a' ? 'b' : 'a');
        }
        cout << s << endl;
    }

    return 0;
}
