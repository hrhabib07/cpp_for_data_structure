#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> st;
    while (n--)
    {
        int q, v;
        cin >> q >> v;
        if (q == 1)
        {
            st.insert(v);
        }
        else if (q == 2)
        {
            auto it = st.find(v);
            if (it != st.end())
                st.erase(it);
        }
        else if (q == 3)
        {
            auto it = st.find(v);
            if (it != st.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
