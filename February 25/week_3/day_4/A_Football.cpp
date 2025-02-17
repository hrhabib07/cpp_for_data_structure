#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char prev = '2';
    int count = 0;
    for (char c : s)
    {
        if (count >= 7)
        {
            break;
        }
        else if (c == prev)
        {
            count++;
        }
        else
        {
            count = 1;
            prev = c;
        }
    };
    if (count >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}