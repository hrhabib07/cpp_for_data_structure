#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<string, int>m;
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.erase(m.find("tv"));
    for(auto val:m){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}