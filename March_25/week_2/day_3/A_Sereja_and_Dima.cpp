#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    };
    int ind = 0;
    long long p1 = 0, p2 = 0;
    while (!v.empty())
    {
        int i = v.front(), j = v.back();
        if (i > j)
        {
            if (ind % 2 == 0)
            {
                p1 += i;
                v.erase(v.begin());
            }
            else
            {
                p2 += i;
                v.erase(v.begin());
            }
        }
        else
        {
            if (ind % 2 == 0)
            {
                p1 += j;
                v.pop_back();
            }
            else
            {
                p2 += j;
                v.pop_back();
            }
        }
        ind++;
    }

    cout << p1 << " " << p2;
    return 0;
}