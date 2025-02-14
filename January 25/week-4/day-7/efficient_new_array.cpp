#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> v1(n), v2(n);
    
    for (auto& x : v1) cin >> x;
    for (auto& x : v2) cin >> x;
    
    vector<int> v3 = v2;          
    v3.reserve(v1.size() + v2.size()); 
    v3.insert(v3.end(), v1.begin(), v1.end());  
    
    if (!v3.empty()) {
        cout << v3[0];
        for (size_t i = 1; i < v3.size(); ++i) {
            cout << " " << v3[i];
        }
    }
    
    return 0;
}