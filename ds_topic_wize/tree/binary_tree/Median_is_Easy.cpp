#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        priority_queue<int> left; 
        priority_queue<int, vector<int>, greater<int>> right; 

        for (int i = 0; i < n; ++i) {
            long long x; cin >> x;
            int val = x % 10;

            if (left.empty() || val <= left.top()) {
                left.push(val);
            } else {
                right.push(val);
            }

            if (left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            } else if (right.size() > left.size()) {
                left.push(right.top());
                right.pop();
            }
            cout << left.top() << " ";
        }
        cout << endl;
    }
    return 0;
}
