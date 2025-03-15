#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    };
    sort(v.begin(), v.end());
    int flag = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (s > v[i].first)
            s += v[i].second;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}