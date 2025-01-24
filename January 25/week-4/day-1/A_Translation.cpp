#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()==s2.size()){
    string res ="YES";
    int i = 0;
    int j= s1.size()-1;
    
    while (j>=0)
    {
        if(s1[i]!=s2[j]){
            res="NO";
            break;
        }
    i++;
    j--;
    }
    cout<<res;
    } else{
        cout<<"NO";
    }

    return 0;
}