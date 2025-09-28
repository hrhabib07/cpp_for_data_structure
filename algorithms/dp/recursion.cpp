#include <bits/stdc++.h>
using namespace std;
int v[1000];
int res[1000];
int sz;
int sum(int n)
{
    if (n == sz)
        return 0;
    if (res[n] != -1)
        return res[n];

    else
    {
        int op1 = sum(n + 1);
        int op2 = sum(n + 2);
        res[n] = max(op1, (op2 + v[n]));
        return res[n];
    }
}

int main()
{
    int n;
    cin >> n;
    sz = n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        res[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sum(0);
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (res[i] > mx)
            mx = res[i];
    }
    cout << mx;
    return 0;
}
