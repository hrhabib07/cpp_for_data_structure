#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int LCS(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    else if (s1[i] == s2[j])
    {
        return LCS(i - 1, j - 1) + 1;
    }
    else
    {
        int op1 = LCS(i - 1, j);
        int op2 = LCS(i, j - 1);
        return max(op1, op2);
    }
}

int main()
{
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    int common = LCS(n - 1, m - 1);
    cout << common << endl;
    return 0;
}
