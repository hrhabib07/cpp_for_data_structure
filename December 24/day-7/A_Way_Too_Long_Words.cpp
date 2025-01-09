#include<bits/stdc++.h>
using namespace std;
string miniStr(string s){
    int leng = s.size();
    if(leng<11){
        return s;
    } else{
       string miniS;
        miniS.push_back(s.front());    
        miniS.append(to_string(leng - 2));
        miniS.push_back(s.back());
        return miniS;
    }
}
int main(){
    int n;
    cin>>n;
    string allStr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>allStr[i];
    }
    for (int i = 0; i < n; i++)
    {
        allStr[i] = miniStr(allStr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<allStr[i];
        if(i!=n-1){
            cout<<endl;
        }
    }
    
    return 0;
}