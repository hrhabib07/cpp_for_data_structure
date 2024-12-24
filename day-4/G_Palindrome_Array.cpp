#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    };
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<numbers[i];
    // };

    int result = 0;
    int index =n;
    int i=0;
    while (index>0)
    {
        if(i>=index-i){
            break;
        }
        if((numbers[i]==numbers[n-i-1])){
            result=1;
            index--;
            i++;
        } else{
            result=0;
            index=0;
        }
    }
    
    if(result==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}