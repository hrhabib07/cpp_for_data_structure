#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int countA = 0,
        countB = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (countA == a && countB == b)
            flag = 1;
        scanf("%c", &c);
        if (c == 'N')
            countA++;
        else if (c == 'W')
            countA--;
        else if (c == 'E')
            countB++;
        else if (c == 'S')
            countB--;
    }
    cout << "a%A: " << a % countA << "; b%B: " << b % countB << "; a " << (a / countA) << "; b " << (b / countB) << endl;
    if (countA < 1 || countB < 1)
        cout << "NO" << endl;
    else if (countA == countB && a == b)
        cout
            << "YES" << endl;
    else if ((a % countA == 0) && (b % countB == 0) && ((a / countA) == (b / countB)))
        cout
            << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
