#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n;
        cin >> n;
        if (n >= 3)
        {
            if (n >= 3 && n < 15)
                sum = 3;
            if (n % 15 == 0)
                sum = (((n / 15)) * 3) + 1;
            else if (n % 15 == 1)
                sum = (((n / 15)) * 3) + 2;
            else if (n % 15 == 1)
                sum = (((n / 15)) * 3) + 3;
            else
                sum = ((n / 15) + 1) * 3;
        }
        else
        {

            if (n == 2)
                sum = 3;
            else if (n == 1)
                sum = 2;
            else if (n == 0)
                sum = 1;
        }
        cout << sum << endl;
    }
    return 0;
}