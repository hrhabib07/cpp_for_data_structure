#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float tq = 0.0, ty = 0.0;
    while (n--)
    {
        float q, y;
        cin >> q >> y;
        tq += q;
        ty += y;
    }
    cout << tq << " " << ty;
    return 0;
}
