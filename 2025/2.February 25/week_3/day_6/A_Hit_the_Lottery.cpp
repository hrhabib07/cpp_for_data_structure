#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int total = 0;
    int w1 = n / 100;
    int r1 = n % 100;
    int w2 = r1 / 20;
    int r2 = r1 % 20;
    int w3 = r2 / 10;
    int r3 = r2 % 10;
    int w4 = r3 / 5;
    int r4 = r3 % 5;
    cout << (w1 + w2 + w3 + w4 + r4);
    return 0;
}