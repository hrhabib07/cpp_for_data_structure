#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m; // map take values in sorter order
    m.insert({"Yousuf",7});
    m["Habib"] = 19;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    return 0;
}