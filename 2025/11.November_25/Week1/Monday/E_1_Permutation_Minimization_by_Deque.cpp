#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int left = dq.front();
            // int right = dq.back();
            if (x <= left)
                dq.push_front(x);
            else
                dq.push_back(x);
        }

        while (dq.size())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }

    return 0;
}
