#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int res = 1;
        for (int i = 1; i < n; i++)
        {
            int cur = v[i];
            int prev = v[i - 1];
            if (cur != prev)
                res++;
        }
        cout << res << endl;
    }

    return 0;
}
