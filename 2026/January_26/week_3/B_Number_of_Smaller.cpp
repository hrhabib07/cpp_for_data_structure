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
    vector<int> v(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    vector<int> res;
    int i = 0, j = 0;
    while (j < m)
    {
        while (v[i] < v2[j] && i < n)
            ++i;
        j++;
        cout << i << " ";
    }

    return 0;
}
