#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> freq(26, 0);
    string s;
    cin >> s;
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    int flag = -1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            flag = i;
            break;
        }
    }
    if (flag >= 0)
        cout << char('a' + flag);
    else
        cout << "None";

    return 0;
}
