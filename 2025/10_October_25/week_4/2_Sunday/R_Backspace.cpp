#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    stack<char> stck;
    for (auto c : s)
    {
        if (c != '<')
            stck.push(c);
        else
        {
            if (!stck.empty())
            {
                stck.pop();
            }
        }
    }
    string res = "";

    while (!stck.empty())
    {
        res += stck.top();
        stck.pop();
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}
