#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int prevPowerOf2(int n)
{
    if (n <= 0)
        return 0;
    int p = (int)log2(n);
    return 1 << p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int isP = isPowerOfTwo(n);
        bool isP2 = false;
        int prevsP = prevPowerOf2(n);
        cout << prevsP << endl;
        int diff = n - prevsP;
        cout << diff << endl;
        if (diff % 3 == 0)
        {
            isP2 = true;
        }
        if (isP || isP2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}