#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 5);
    cout << l.size() << endl;
    for (int x : l)
    {
        cout << x << " ";
    }
    // auto temp = l.begin();
    // while (temp != l.end())
    // {
    //     cout << *temp << " ";
    //     temp++;
    // }

    return 0;
}
