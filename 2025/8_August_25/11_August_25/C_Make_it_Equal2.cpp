#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int k; cin>>k;
        multiset<int> ms1, ms2;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms1.insert(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms2.insert(x);
    }

    // int diff = *ms2.begin() - *ms1.begin(); 
    auto it1 = ms1.begin();
    auto it2 = ms2.begin();

    bool flag = true;
    for (; it1 != ms1.end() && it2 != ms2.end(); ++it1, ++it2) {
        int a = *it1;
        int b = *it2;
        if(a==b) continue;
        
    }
        
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    return 0;
}
