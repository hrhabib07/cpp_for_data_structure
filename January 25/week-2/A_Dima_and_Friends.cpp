#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>f;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        // f.push_back(x);
    }
    if(sum%n==0 &&sum!=2){
        cout<<3;
    } else if(sum%n==1){
        cout<<4;
    } else if(sum%n==2){
        cout<<2;
    } else if(sum%n==3){
        cout<<3;
    }
//    if(sum%n==0 && sum!=2){
//         cout<<3;
//     } else{
//         int remain = sum%n;
//         if(remain==2){
//             cout<<4;
//         }else if(remain==8){
//             cout<<4;
//         } else if(remain<1){
//             cout<<2;
//         } else{
//             cout<<4;
//         }
//     }
    return 0;
}