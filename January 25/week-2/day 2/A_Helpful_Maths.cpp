#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int one=0;
    int two=0;
    int three=0;
    for(char c:s){
        if(c=='1'){
            one++;
        } else if(c=='2'){
            two++;
        } else if(c=='3'){
            three++;
        };
    };
    string nS;
    for (int i = 0; i < one; i++)
    {
        nS.push_back('1');
        if(i==one-1){
            if(two!=0||three!=0){
                nS.push_back('+');
            }
        } else{
        nS.push_back('+');
        }
    }
    for (int i = 0; i < two; i++)
    {
        nS.push_back('2');
        if(i==two-1){
            if(three!=0){
                nS.push_back('+');
            }
        } else{
        nS.push_back('+');
        }
    }
    for (int i = 0; i < three; i++)
    {
        nS.push_back('3');
        if(i!=three-1){  
        nS.push_back('+');
        } 
    }
    cout<<nS;
    return 0;
}