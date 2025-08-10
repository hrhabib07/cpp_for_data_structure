#include <bits/stdc++.h>
using namespace std;
// int max = 100;
// int a[max];
int flag = 0;
void recursive_binary_saerch(int a[],int n,int t,int l,int h){
    if(l>h) return;
    else{
        int mid = (l+h)/2;
        if(a[mid]==t){ flag = 1;return;}
        else if(a[mid]>t)
            recursive_binary_saerch(a,n,t,l,(mid-1));
             else recursive_binary_saerch(a,n,t,(mid+1),h);
    }
}


int main() {
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int t; cin>>t;
    recursive_binary_saerch(a,n,t,0,n-1);
    if(flag) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}
