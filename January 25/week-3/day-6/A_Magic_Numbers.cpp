#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string res = "YES";
    int prevs=0;
    while(n>0){
        int reminder;
        reminder = n%10;
        if(n<9 && n!=1){
            res="NO";
            n=0; 
        } else if(reminder==4){
            prevs++;
            if(prevs>2){
                res="NO";
                n=0;
            }
        } else if(reminder==1){
            prevs=0;
        } else{
            res="NO";
            n=0;
        }
        n=n/10;
    };
    cout<<res;
    return 0;
}