#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>()); 

    long long sum = 0;
    int minod = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (v[i] > 0) sum += v[i];
        if (abs(v[i]) % 2 == 1) {
            minod = min(minod, abs(v[i]));
        }
    }

    if (sum % 2 == 1) {
        cout << sum;
    } else {
        if (minod == INT_MAX) cout << -1; 
        else cout << sum - minod;
    }

    return 0;
}
