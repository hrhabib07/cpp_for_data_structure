#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = x;
        }
        sort(v.begin(), v.end());
        long long int diff = INT_MIN;
        for (long long int i = 0; i < n; i += 2)
        {
            long long int curdif = v[i + 1] - v[i];
            if (curdif > diff)
                diff = curdif;
        }
        cout << diff << endl;
    }

    return 0;
}
