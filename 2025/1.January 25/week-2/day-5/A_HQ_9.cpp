#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin>>p;
    string output = "NO";
    for(char c:p){
        if(c=='H'||c=='Q'||c=='9'){
            output="YES";
            break;
        }
    }
    cout<<output;
    return 0;
}