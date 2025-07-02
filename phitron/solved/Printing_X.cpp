#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int xflag = 0;
    if (n == 1)
        cout << 'X';
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (xflag && i == j && i == n / 2 && j == n / 2)
                {
                    cout << "X";
                    xflag = 0;
                    continue;
                }
                if (i == n / 2)
                    xflag = 1;

                if (i == j)
                {
                    cout << "\\";
                }
                else if ((i + j == n - 1))
                    cout << '/';
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
