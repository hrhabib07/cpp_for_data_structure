#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        long long int k, x;
        cin >> k >> x;

        long long totl = (1LL << (k + 1));  
        long long strt = (1LL << k);         
        long long ch = x;
        long long vn = totl - x;

        vector<int> v;

        int steps = 0;
        while ((ch != strt || vn != strt) && steps <= 120) {
            if (vn > ch) {
                long long new_vn = vn - ch;
                long long new_ch = ch * 2;
                vn = new_vn;
                ch = new_ch;
                v.push_back(1);
            }
            else if (ch > vn) {
                long long new_ch = ch - vn;
                long long new_vn = vn * 2;
                ch = new_ch;
                vn = new_vn;
                v.push_back(2);
            }
            else {
                break;
            }
            steps++;
        }

        reverse(v.begin(), v.end());

        cout << v.size() << endl;
        if (!v.empty()) {
            for (int i = 0; i < v.size(); ++i) {
                if (i > 0) cout << " ";
                cout << v[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}