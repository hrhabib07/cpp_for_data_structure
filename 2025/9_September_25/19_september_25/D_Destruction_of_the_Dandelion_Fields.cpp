#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        long long n; cin>>n;
        long long cnt = 0;
        int lastOdd = -1;
        vector<long long >vodd;
        while (n--)
        {
            long long ai; cin>>ai;
            if(ai%2==0) cnt+=ai;
            else{
                vodd.push_back(ai);
            }
        }
        int flag = vodd.size();
        if(!flag){
            cout<<0<<endl;
        } else {

            sort(vodd.rbegin(),vodd.rend());
            int odsz = (vodd.size()+1)/2;
            for (int i = 0; i < odsz; i++)
            {
                cnt+=vodd[i];
            }
            
         cout<<cnt<<endl;
        }
    }
    
    return 0;
}
