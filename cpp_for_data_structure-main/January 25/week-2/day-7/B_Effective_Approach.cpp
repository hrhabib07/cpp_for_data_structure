#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> index_map; 
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        index_map[a[i]] = i + 1; 
    }
    
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    long long va = 0; 
    long long pa = 0;
    
    for (int i = 0; i < m; i++) {
        int target = b[i];
        if (index_map.find(target) != index_map.end()) { 
            int pos = index_map[target]; 
            va += pos; 
            pa += (n - pos + 1); 
        }
    }
    
    cout << va << " " << pa << endl;
    return 0;
}
