#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cholo bangladesh
    string s;
    cin >> s;
    int sz = s.size();
    string res = "";
    res += s[0];
    for (int i = 1; i < sz; i++)
    {
        if (s[i] == '-' && i != sz - 1)
            res += s[i + 1];
    }
    cout << res << endl;

    return 0;
}
