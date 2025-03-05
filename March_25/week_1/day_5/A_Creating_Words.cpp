#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char c1, c2;
        c1 = a[0];
        c2 = b[0];
        a[0] = c2;
        b[0] = c1;
        cout << a << " " << b << "\n";
    }

    return 0;
}