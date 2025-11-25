#include <bits/stdc++.h>
using namespace std;
int t, n;
string s;
int main()
{
        cin >> t;
        while (t--)
        {
                cin >> n >> s;
                int o = count(s.begin(), s.end(), '1');
                if (s[0] == '0' || s.back() == '0' || o & 1)
                {
                        puts("NO");
                        continue;
                }
                int c = 0, f = 0;
                string a, b;
                for (auto &i : s)
                {
                        if (i == '1')
                        {
                                if (c < o / 2)
                                        a += '(', b += '(';
                                else
                                        a += ')', b += ')';
                                c++;
                        }
                        else
                        {
                                if (!f)
                                        a += '(', b += ')';
                                else
                                        a += ')', b += '(';
                                f = !f;
                        }
                }
                puts("YES");
                cout << a << '\n'
                     << b << '\n';
        }
        // hello
        return 0;
}
