#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; 
    while (t--)
    {
        int n; cin>>n;
        int flag = 0;
        int count=0;
        int temp=n;
        while (temp)
        {
            if(temp%10==7){
                flag=1;
                break;
            } 
            temp/=10;
        }
        if(flag){
            cout<<count<<endl;
        }else{
            int current = n%10;
            if(current>7){
                cout<<current-7<<endl;
            }
            else if(current<7){
                int prev = n/10;
                if(prev<7 && current>0){
                    cout<<7-prev<<endl;
                } else if(prev<7 && current>0){
                    cout<<7-prev+1<<endl;
                }
            }
            else if(n>79){
                
            }
        }
    }
    
    return 0;
}