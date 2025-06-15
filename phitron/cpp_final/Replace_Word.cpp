#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        string s; string x;
        cin>>s>>x;
        int len = x.size();
        int len2 = s.size();
        for (int i = 0; i < len2; i++)
        {
            
                if(s[i]==x[0]){
                    int flag = 1;
                    for (int j = 0; j <len; j++)
                    {
                        if(s[i+j]!=x[j]){
                            flag=0;
                            break;
                        }
                    }
                    
                    if(flag) s.replace(i,len,string(1,'#'));
               
            }
            
        }  
        cout<<s<<endl;
    }
    
    return 0;
}
