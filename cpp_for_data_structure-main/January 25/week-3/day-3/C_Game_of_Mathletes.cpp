#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> v;
    for (int k = 0; k < t; k++) {
        int n, m;
        cin >> n >> m;
        vector<int> inp(n);
        for (int i = 0; i < n; i++) {
            cin >> inp[i];
        }
        unordered_map<int, int> freq;
        int score = 0;
        for (int x : inp) {
            int complement = m - x; 
            if (freq[complement] > 0) {
                score++;
                freq[complement]--; 
            } else {
                freq[x]++;
            }
        }
        v.push_back(score);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
