#include<iostream>
#include<algorithm>
using namespace std;
// int myMin(int a, int b){
//     if(a<b) return a;
//     else return b;
// }
// int myMax(int a, int b){
//     if(a>b) return a;
//     else return b;
// }

int main(){
    int n,m;
    cin>>n>>m;
    int mn=min(n,m);
    int mx=max(n,m);
    cout<<mn<<" < "<<mx;

    return 0;
}