#include<bits/stdc++.h>
using namespace std;
int main(){
    string guest,host,found;
    cin>>guest>>host>>found;
    for (char c : guest)
    {
        int ind = found.find(c);
       if (ind != string::npos) { 
            found.erase(ind, 1);
        } else {
            cout << "NO"; 
            return 0;
        }
    };
    for (char c : host)
    {
        int ind = found.find(c);
       if (ind != string::npos) { 
            found.erase(ind, 1);
        } else {
            cout << "NO";
            return 0;
        }
    };
    int sz = found.size();
    if(sz==0){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    //cout<<found;
    
    // cout<<" Guest : "<<guest<<"; \n Host : "<<host<<"; \n Found : "<<found;
    return 0;
}