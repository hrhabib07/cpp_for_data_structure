#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}
