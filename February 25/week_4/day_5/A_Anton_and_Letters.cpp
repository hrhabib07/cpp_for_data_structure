#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int c = s[i];
        if (c >= 97 && c <= 122)
            freq[c - 97] = 1;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i])
        {

            sum++;
        }
    }
    cout << sum;
    return 0;
}