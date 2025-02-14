#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> p = {{1,3},{2,4},{7,9}};
    p.push_back({11,13}); // push back will not take without { }
    p.emplace_back(15,17); // emplace back will take without { }
    for(pair<int,int> val:p){
    cout<<val.first<<" "<<val.second<<endl;
    // cout<<p.second;
    }

    return 0;
}





    // pair<int, pair<int,string>> p ={61, {19,"Habib"}};
    // cout<<p.first<<endl;
    // cout<<p.second.second;

    // pair<int, string> p ={19,"Habib"};
    // cout<<p.first<<endl;
    // cout<<p.second;

    // pair<int, int> p ={2,5};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;