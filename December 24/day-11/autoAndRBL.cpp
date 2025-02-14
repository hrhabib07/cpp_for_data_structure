#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v_p={{3,2},{3,4},{3,5}};

    for(auto it = v_p.begin();it!=v_p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    };
    return 0;
}