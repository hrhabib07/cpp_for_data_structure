#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

void merge(vector<int> &v, int l, int mid, int h)
{
    vector<int> left(v.begin() + l, v.begin() + mid + 1);
    vector<int> right(v.begin() + mid + 1, v.begin() + h + 1);
    int i = 0, j = 0, k = l;
    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            v[k++] = left[i++];
        else
            v[k++] = right[j++];
    }
    while (i < left.size())
    {

        v[k++] = left[i++];
    }
    while (j < right.size())
    {

        v[k++] = right[j++];
    }
}

void merge_sort(vector<int> &v, int l, int h)
{
    if (l < h)
    {
        int mid = (h + l) / 2;
        merge_sort(v, l, mid);
        merge_sort(v, mid + 1, h);
        merge(v, l, mid, h);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    merge_sort(v, 0, n - 1);
    for (int x : v)
        cout << x << " ";
    return 0;
}
