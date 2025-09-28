#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int flag = 0;
    while (n)
    {
        long long int x = n % 10;
        if (x == 7)
        {
            flag = 1;
            break;
        }
        else
        {
            n /= 10;
        }
    }
    if (flag)
        cout << "Lucky" << endl;
    else
        cout << "Not Lucky" << endl;
    return 0;
}
