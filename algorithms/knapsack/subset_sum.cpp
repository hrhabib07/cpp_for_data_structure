#include <bits/stdc++.h>
using namespace std;
vector<int> v;
bool subset_sum(int i, int sum)
{
    if (i < 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }
    if (v[i] <= sum)
    {
        bool op1 = subset_sum(i - 1, sum - v[i]);
        bool op2 = subset_sum(i - 1, sum);
        return op1 || op2;
    }
    else
    {
        return subset_sum(i - 1, sum);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum;
    cin >> sum;

    bool res = subset_sum(n - 1, sum);
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
