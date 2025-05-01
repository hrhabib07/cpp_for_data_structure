#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    if (s1[0] == '0')
    {
        int idx = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != '0')
            {
                idx = i;
                break;
            }
        }
        if (idx)
        {
            char init = s1[idx];
            s1.erase(idx, 1);
            s1 = init + s1;
        }
    }
    if (s2 == s1)
    {
        cout << "OK";
    }
    else
    {
        cout << "WRONG_ANSWER";
    }
    return 0;
}