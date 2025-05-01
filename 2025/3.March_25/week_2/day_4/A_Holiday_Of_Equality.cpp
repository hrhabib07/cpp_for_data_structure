#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x > max)
            max = x;
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += max - v[i];
    }
    cout << sum;
    return 0;
}