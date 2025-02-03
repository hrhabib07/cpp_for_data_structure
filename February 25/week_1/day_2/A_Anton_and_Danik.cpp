#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int aton=0;int danik=0;
    for (char c : s)
    {
        if(c == 'A'){
            aton++;
        } else if(c=='D'){
            danik++;
        }
    }
    if(danik>aton) cout<<"Danik";
    else if (aton>danik) cout<<"Anton";
    else if (aton==danik) cout<<"Friendship";
    return 0;
}