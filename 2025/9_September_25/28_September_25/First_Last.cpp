#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;
    vector<long long> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<long long int, pair<long long int, long long int>> res;

    for (long long int i = 0; i < n; i++)
    {
        long long x = v[i];
        if (res.find(x) == res.end())
        {
            res[x] = {i + 1, i + 1};
        }
        else
        {
            res[x].second = i + 1;
        }
    }

    for (auto p : res)
    {
        cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    }

    return 0;
}