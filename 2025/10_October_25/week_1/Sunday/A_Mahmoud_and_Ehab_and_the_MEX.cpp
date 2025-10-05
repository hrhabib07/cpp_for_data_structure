#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int count = 0;
    vector<int> v(x + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (z <= x)
            v[z]++;
    }

    for (int i = 0; i < x; i++)
    {
        if (v[i] == 0)
            count++;
    }
    if (v[x] != 0)
        count++;

    cout << count;

    return 0;
}
