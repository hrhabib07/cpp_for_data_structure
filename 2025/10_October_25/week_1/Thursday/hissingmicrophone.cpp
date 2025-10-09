#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int res = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 's' && i < sz - 1)
        {
            if (s[i + 1] == 's')
            {
                res = 1;
                break;
            }
        }
    }
    if (res)
        cout << "hiss" << endl;
    else
        cout << "no hiss" << endl;
    return 0;
}
