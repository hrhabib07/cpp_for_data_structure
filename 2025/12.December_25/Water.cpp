#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        pair<int,int>max1;
        pair<int,int>max2;
        max1={INT_MIN,-1};
        max2={INT_MIN,-1};
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(x>max2.first && x>max1.first){
                max2 = max1;
                max1 = {x,i};
            } else if(x>max2.first && x<=max1.first){
                max2={x,i};
            }
        }
        int x1= max1.second,x2=max2.second;

        cout<<min(x1,x2)<<" "<<max(x1,x2)<<endl;
        
    }
    
    return 0;
}
