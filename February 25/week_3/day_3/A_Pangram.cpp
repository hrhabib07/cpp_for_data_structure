#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // if (n < 25)
    // {
    //     cout << "NO" << endl;
    // }
    // else
    {
        int freq[26] = {0};
        for (char i = 0; i < n; i++)
        {
            int current = tolower(s[i]) - 'a';
            freq[current]++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            // cout << freq[i] << " ";
            int fre = freq[i];
            if (!fre)
            {
                // cout << fre << " freq" << endl;
                flag = false;
                break;
            }
        };
        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}