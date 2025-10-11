#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lng = s.size();
    lng /= 2;
    s.erase(lng, 1);
    cout << s;
    return 0;
}
