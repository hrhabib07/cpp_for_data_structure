#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
            v.push_back(x);
        else
        {
            int prev = v.back();
            if (prev > x)
            {
                res += (prev - x);
                v.push_back(prev);
            }
            else
            {
                v.push_back(x);
            }
        }
    }
    cout << res << endl;

    return 0;
}
