void print_num(int n)
{
    if (n == 6)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    print_num(n + 1);
    cout << n << " ";
}
print_num(1);
#include <bits/stdc++.h>
using namespace std;

int main()
{
    print_num(1);
    return 0;
}
