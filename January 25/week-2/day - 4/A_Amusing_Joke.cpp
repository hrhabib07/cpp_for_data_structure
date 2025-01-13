#include<bits/stdc++.h>
using namespace std;
int main(){
    string guest,host,found;
    cin>>guest>>host>>found;
    for (char c : guest)
    {
        int ind = found.find(c);
       
            found.erase(ind,1);
        
    };
    for (char c : host)
    {
        int ind = found.find(c);
       
        found.erase(ind,1);
        
    };
    if(!found.size()){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    //cout<<found;
    
    // cout<<" Guest : "<<guest<<"; \n Host : "<<host<<"; \n Found : "<<found;
    return 0;
}