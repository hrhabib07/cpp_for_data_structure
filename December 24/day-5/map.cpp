#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    
    m["Habib"]=93;
    m["Yousuf"]=97;
    m["Bishal"] = 99;
    m["Rohit"] = 99;

    // m.erase("Rohit");
    if(m.find("Habib")!=m.end()){
        cout<<"found"<<endl;
    } else{
        cout<<"Not found";
    }
    cout<<endl;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}