#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int i = 0, j = 0;
    while (j < m)
    {
        while (v1[i] < v2[j] && i < n)
        {
            ++i;
        }

        cout << i << " ";
        j++;
    }

    return 0;
}
