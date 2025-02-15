#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int initial;
    cin >> initial;
    t--;
    int count = 1;
    while (t--)
    {
        int current;
        cin >> current;
        if (initial != current)
        {
            count++;
            initial = current;
        }
    }
    cout << count;
    return 0;
}