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
        int sz = s.size() - 1;
        string newS = "";
        int cc = 0, cs = 0;
        for (int i = sz; i >= 0; i--)
        {
            char c = s[i];
            if (c == 'b')
                cs = 1;

            else if (c == 'B')
                cc = 1;

            if (!cc && !cs)
                newS += c;
            if (cc && c >= 'A' && c <= 'Z')
            {
                cc = 0;
            }
            if (cs && c >= 'a' && c <= 'z')
            {
                cs = 0;
            }
            else
            {
                newS += c;
            }
        }
        reverse(newS.begin(), newS.end());
        cout << newS << endl;
    }

    return 0;
}
