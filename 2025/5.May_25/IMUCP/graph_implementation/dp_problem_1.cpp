#include <bits/stdc++.h>
using namespace std;

long long int dp[10100];
int a, b, c, d, e, f;

int fn(int n) {
    if (n == 0) return a % 10000007;
    if (n == 1) return b % 10000007;
    if (n == 2) return c % 10000007;
    if (n == 3) return d % 10000007;
    if (n == 4) return e % 10000007;
    if (n == 5) return f % 10000007;

    if (dp[n] != -1) return dp[n];
    return dp[n] = (
        fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)
    ) % 10000007;
}

int main() {
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n; cin >> a >> b >> c >> d >> e >> f >> n;
        for (int i = 0; i < 10100; i++) dp[i] = -1;
        cout << "Case " << i << ": " << fn(n) << endl;
    }

    return 0;
}
