#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int target;
        cin >> target;
        int high = n - 1, low = 0, mid, flag = 0;
        while (high >= low)
        {
            mid = (high + low) / 2;
            int curr = v[mid];
            if (curr == target)
            {
                flag = 1;
                break;
            }
            else if (curr < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        flag ? cout << "found" << endl : cout << "not found" << endl;
    }

    return 0;
}
