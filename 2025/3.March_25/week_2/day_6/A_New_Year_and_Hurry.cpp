#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int total = k;
    int count = 0;
    while (total <= 240 && count < n)
    {
        count++;
        total += count * 5;
    }
    if (total > 240)
        count--;
    cout << count;
    return 0;
}