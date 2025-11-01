#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end());
    int count = 0;
    // int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > count)
        {
            // k++;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
