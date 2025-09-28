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
        string s;
        cin >> s;

        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                v1.push_back(i);
            else
                v2.push_back(i);
        }

        long long totalA = 0;
        if (v1.size() > 1)
        {
            vector<long long> v;
            for (int i = 0; i < (int)v1.size(); i++)
                v.push_back(v1[i] - i);
            sort(v.begin(), v.end());
            long long mid = v[v.size() / 2];
            for (long long x : v)
                totalA += abs(x - mid);
        }

        long long totalB = 0;
        if (v2.size() > 1)
        {
            vector<long long> v;
            for (int i = 0; i < (int)v2.size(); i++)
                v.push_back(v2[i] - i);
            sort(v.begin(), v.end());
            long long mid = v[v.size() / 2];
            for (long long x : v)
                totalB += abs(x - mid);
        }

        cout << min(totalA, totalB) << endl;
    }

    return 0;
}