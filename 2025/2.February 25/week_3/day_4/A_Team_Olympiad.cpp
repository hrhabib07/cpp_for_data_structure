#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            a.push_back(i + 1);
        }
        else if (x == 2)
        {
            b.push_back(i + 1);
        }
        else if (x == 3)
        {
            c.push_back(i + 1);
        }
    }
    int count1 = a.size();
    int count2 = b.size();
    int count3 = c.size();
    int out = min(count1, min(count2, count3));
    cout << out << endl;
    for (int i = 0; i < out; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }

    return 0;
}