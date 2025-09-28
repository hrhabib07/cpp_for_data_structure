#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        for (auto c : s)
        {
            if (!res.empty() && res.back() == c)
            {
                res.pop_back();
            }
            else
            {
                res.push_back(c);
            }
        }
        cout << res.size() << endl;
    }

    return 0;
}
