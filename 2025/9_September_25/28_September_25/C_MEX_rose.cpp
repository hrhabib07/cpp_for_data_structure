#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<long long int> v(n);
        vector<bool> isPres(k, false);
        long long int countk = 0;

        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;

            if (x == k)
                countk++;

            else if (x >= 0 && x < k)
            {
                isPres[x] = true;
            }
        }
        long long int missing = 0;
        for (long long int i = 0; i < k; i++)
        {
            if (!isPres[i])
                missing++;
        }
        cout << max(missing, countk) << endl;
    }

    return 0;
}
