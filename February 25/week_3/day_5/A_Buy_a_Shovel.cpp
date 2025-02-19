#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int count = 1;
    int flag = 1;
    int init = k;
    while (flag)
    {
        if (k % 10 != r && k % 10 != 0)
        {
            count++;
            k += init;
        }
        else
        {
            flag = 0;
        }
    };
    cout << count;

    return 0;
}