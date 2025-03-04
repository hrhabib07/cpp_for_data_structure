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
        int count = 0;
        string rt = "codeforces";
        for (int i = 0; i < rt.length(); i++)
        {
            if (s[i] != rt[i])
                count++;
        }
        cout << count << '\n';
    }

    return 0;
}