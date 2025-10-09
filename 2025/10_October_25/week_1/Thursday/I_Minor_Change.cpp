#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sz = s1.size();
    int cnt = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s1[i] != s2[i])
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
