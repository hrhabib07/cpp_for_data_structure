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
        vector<int> sv;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sv = v;
        sort(sv.begin(), sv.end());
        if (sv == v)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
