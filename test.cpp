#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main() {
    // map<int, string>m;
    // m[2]="bdc";
    // m[5]="hei"; 
    // m[3]="hello";
    // for(auto it:m){
    //     cout<<it.first<<" "<<it.second<<endl;
    // } 
    vector<int>a={1,2,3,4,5};
    auto it = lower_bound(all(a), 3);   // First position >= 3
    auto it2 = upper_bound(all(a), 3);  // First position > 3
    cout<<*it<<endl<<*it2;

    return 0;
}
