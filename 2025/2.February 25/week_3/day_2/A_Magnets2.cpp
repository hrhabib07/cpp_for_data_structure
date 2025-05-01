#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 1;
    string inital;
    cin >> inital;
    t--;
    while (t--)
    {
        string current;
        cin >> current;
        if (current != inital)
        {
            count++;
            inital = current;
        }
    }
    cout << count;
    return 0;
}