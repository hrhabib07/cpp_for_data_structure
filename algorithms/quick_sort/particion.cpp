#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';
int partition(int l, int h, int a[])
{
    int pivot = a[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i >= j)
            return j;
        swap(a[i], a[j]);
    }
}

void quick_sort(int l, int h, int a[])
{
    if (l < h)
    {
        int j = partition(l, h, a);
        quick_sort(l, j, a);
        quick_sort(j + 1, h, a);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // a[n] = INT_MAX;
    quick_sort(0, n - 1, a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
