#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int n = mid - l + 1;
    int lst[n];

    for (int i = 0; i < n; i++)
    {
        lst[i] = a[i + l];
    }
    int m = r - mid;
    int rst[m];
    for (int i = 0; i < m; i++)
    {
        rst[i] = a[i + mid + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n && j < m)
    {
        if (lst[i] < rst[j])
            a[k++] = lst[i++];
        else
            a[k++] = rst[j++];
    }
    while (i < n)
    {
        a[k++] = lst[i++];
    }
    while (j < m)
    {
        a[k++] = rst[j++];
    }
}

void merge_sort(int a[], int l, int r)
{
    if (l >= r)
        return;
    else
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Original Array :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    merge_sort(a, 0, n - 1);
    cout << "Sorted Array :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
