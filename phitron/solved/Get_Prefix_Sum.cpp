#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i != 0)
        {
            v[i] = v[i - 1] + x;
        }
        else
        {
            v[i] = x;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}
