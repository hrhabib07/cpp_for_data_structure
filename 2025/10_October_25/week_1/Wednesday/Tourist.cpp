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
        int a, b;
        cin >> a >> b;
        int dist = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int nx = abs(a - x), ny = abs(b - y);
            if (nx + ny < dist)
                dist = nx + ny;
        }
        cout << dist << endl;
    }
}
