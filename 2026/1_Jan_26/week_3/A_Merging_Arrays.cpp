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

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v[i] < v2[j])
        {
            cout << v[i] << " ";
            i++;
        }
        else
        {
            cout << v2[j] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << v[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << v2[j] << " ";
        j++;
    }

    return 0;
}
