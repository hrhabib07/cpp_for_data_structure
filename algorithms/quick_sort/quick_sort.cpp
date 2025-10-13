#include <bits/stdc++.h>
using namespace std;

int partition_lomuto(vector<int> &a, int l, int r)
{
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; ++j)
    {
        if (a[j] <= pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quick_sort(vector<int> &a, int l, int r)
{
    if (l >= r)
        return;
    int p = partition_lomuto(a, l, r);
    quick_sort(a, l, p - 1);
    quick_sort(a, p + 1, r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    quick_sort(v, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        if (i)
            cout << ' ';
        cout << v[i];
    }
    cout << '\n';
    return 0;
}
