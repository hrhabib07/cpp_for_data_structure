#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 1000005;
    vector<int> NOD(N);
    for (int i = 1; i <= N; i++)
    {
        NOD[i] = 0;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            NOD[j]++;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << NOD[n] << endl;
    }

    return 0;
}
