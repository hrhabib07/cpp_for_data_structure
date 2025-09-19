#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string sortd_str = s;
        sort(sortd_str.begin(),sortd_str.end());
        if(sortd_str==s) cout<<0<<endl;
        else {
            int cnt =0;
            while(s!=sortd_str){
                cnt++;
                int curc=0;
                for (int i = 0; i < n; i++)
                {
                    if(s[i]='1' && curc!=2) {
                        curc++;
                        s[i]='0';
                        for (int i = 0; i < n; i++)
                        {
                            
                        }
                        
                    }
                    if(curc==2) break;
                }
            }
            cout<<cnt<<endl;
        }
    }
    
    return 0;
}