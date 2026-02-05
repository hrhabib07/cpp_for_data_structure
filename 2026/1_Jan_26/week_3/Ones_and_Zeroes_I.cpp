#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int ones = count(S.begin(), S.end(), '1');
        int max_f = min(N, 2 * ones);

        int swaps = 0;
        if (ones < N)
        {
            for (int i = ones; i < N; ++i)
            {
                if (S[i] == '1')
                {
                    swaps++;
                }
            }
        }

        // Output: one value per line
        cout << max_f << "\n";
        cout << swaps << "\n";
    }

    return 0;
}