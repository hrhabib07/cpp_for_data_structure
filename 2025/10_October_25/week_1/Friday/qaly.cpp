#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    float sum = 0.0;
    while (t--)
    {
        float q, y;
        cin >> q >> y;
        sum += q * y;
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}
