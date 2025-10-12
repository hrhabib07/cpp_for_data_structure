#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum1 = 0, sum2 = 0;
    int flag = 0;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (v[i] > v[j])
        {
            if (flag == 0)
            {
                sum1 += v[i];
                flag = 1;
            }
            else
            {
                sum2 += v[i];
                flag = 0;
            }
            i++;
        }
        else
        {
            if (flag == 0)
            {
                sum1 += v[j];
                flag = 1;
            }
            else
            {
                sum2 += v[j];
                flag = 0;
            }
            j--;
        }
    }
    cout << sum1 << " " << sum2;

    return 0;
}
