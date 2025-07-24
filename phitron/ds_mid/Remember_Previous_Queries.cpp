#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    list<long long> dll;

    while (Q--)
    {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0)
        {
            dll.push_front(V);
        }
        else if (X == 1)
        {
            dll.push_back(V);
        }
        else if (X == 2)
        {
            if (V >= 0 && V < (long long)dll.size())
            {
                auto it = dll.begin();
                advance(it, V);
                dll.erase(it);
            }
        }

        cout << "L -> ";
        for (auto val : dll)
        {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it = dll.rbegin(); it != dll.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
