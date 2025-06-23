#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    vector<pair<int,int>>v(26,{0,0});
    for(auto c:s1){
        v[c-'a'].first++;
    }
    for(auto c:s2){
        v[c-'a'].second++;
    };
    vector<pair<int, int>>vd;
    for (char i ='a'; i <= 'z'; i++)
    {
        int cs1 = v[i-'a'].first;
        int cs2= v[i-'a'].second;
        if(cs1!=cs2)  vd.push_back({cs1,cs2});
    };
    int comp = 0;
    for(int i =0; i<vd.size();i++){
        pair<int,int> cur = vd[i];
        for (int j = 0; j < vd.size(); j++)
        {
            pair<int,int> ncur = vd[j];
            if(cur.first == ncur.second && cur.second == ncur.first){ comp++; cur.first=0; cur.second=0;}
        } 
    }
    if(comp==vd.size()) cout<<"Yes";
    else cout<<"No";
    return 0;
}
