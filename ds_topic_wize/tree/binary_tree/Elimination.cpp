#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else
            {
                if (c == '0')
                    st.push(c);
                else
                {
                    if (st.top() == '0')
                        st.pop();
                    else
                        st.push(c);
                }
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
