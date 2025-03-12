#include <iostream>
using namespace std;

bool isValidTriangle(int x, int y, int z)
{
    return (x + y > z) && (x + z > y) && (y + z > x);
}

int findValidY(int x)
{
    int y = x - 1;
    int z = x ^ y;
    if (isValidTriangle(x, y, z))
    {
        return y;
    }

    if (x % 2 == 0)
    {
        y = x / 2;
        z = x ^ y;
        if (isValidTriangle(x, y, z))
        {
            return y;
        }
    }
    else
    {

        y = (x - 1) / 2;
        z = x ^ y;
        if (isValidTriangle(x, y, z))
        {
            return y;
        }
    }

    for (int y = x - 2; y >= 1; --y)
    {
        int z = x ^ y;
        if (isValidTriangle(x, y, z))
        {
            return y;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        cout << findValidY(x) << endl;
    }

    return 0;
}