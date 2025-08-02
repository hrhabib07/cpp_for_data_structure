#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == 'F' && s[i + 1] == 'F' && s[i + 2] == 'T')
            {
                s[i + 1] = 'T';
                s[i + 2] = 'F';
            }
            else if (s[i] == 'N' && s[i + 1] == 'T' && s[i + 2] == 'T')
            {
                s[i] = 'T';
                s[i + 1] = 'N';
                s[i + 2] = 'T';
            }
        }
        cout << s << endl;
    }

    return 0;
}
