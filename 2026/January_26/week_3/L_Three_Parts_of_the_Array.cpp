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
    for (int i = 0; i < 0; i++)
        cin >> v[i];
    int i = 0, j = n - 1;
    int maxSum = 0;
    while (i < j)
    {
        if (v[i] > v[j])
        {
            int curReq = v[i];
            while (curReq >= 0)
            {
                curReq -= v[j];
                j--;
            }
            if(curReq<0)  
        }
    }

    return 0;
}
