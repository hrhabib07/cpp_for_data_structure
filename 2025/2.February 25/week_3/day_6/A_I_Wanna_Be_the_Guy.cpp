#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    vector<int> v;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    };
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    };
    sort(v.begin(), v.end());
    long long int sum = 0;
    for (int i = 0; i < (p + q); i++)
    {
        if (v[i] != v[i + 1])
        {
            sum += v[i];
        }
    }

    if (sum == ((n * (n + 1)) / 2))
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}