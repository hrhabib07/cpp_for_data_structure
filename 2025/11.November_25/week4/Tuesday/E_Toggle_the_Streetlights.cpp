#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (k == 0)
        {
            cout << s << '\n';
            continue;
        }
        if (k > 4)
        {
            k = k % 2 + 4;
        }
        string current = s;
        for (int minute = 0; minute < k; ++minute)
        {
            string next = current;
            for (int i = 1; i < n - 1; ++i)
            {
                if (current[i - 1] == '1' && current[i + 1] == '1')
                {
                    next[i] = (next[i] == '1') ? '0' : '1';
                }
            }

            current = next;
        }

        cout << current << '\n';
    }

    return 0;
}