#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string,int>> v;
    int t; 
    cin >> t;
    int n = t;
    while (t--) {
        string s; 
        int num;
        cin >> s >> num;
        v.push_back({s, num});
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        if (a.first != b.first) 
            return a.first < b.first; 
        return a.second > b.second;   
    });

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
