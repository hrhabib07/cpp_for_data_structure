#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int now = 1;
    long long int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x >= now)
        {
            sum += x - now;
            now = x;
        }
        else
        {
            sum += (n - (now - x));
            now = x;
        }
    }
    cout << sum;
    return 0;
}