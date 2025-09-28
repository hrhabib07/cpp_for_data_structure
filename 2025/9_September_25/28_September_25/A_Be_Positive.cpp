#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        int count1 = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 0)
                sum++;
            else if (x == -1)
                count1++;
        }

        sum += (count1 % 2) * 2;
        cout << sum << endl;
    }

    return 0;
}
