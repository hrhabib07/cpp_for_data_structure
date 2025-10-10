#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        long long res = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << res << endl;
    }

    return 0;
}
