#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    };
    int *arr2 = new int[n+2];
    arr2[n] = 10;
    arr2[n+1] = 20;

    for (int i = 0; i < n; i++)
    {
       arr2[i] = arr[i];
    }
    for (int i = 0; i < n+2; i++)
    {
       cout<<arr2[i]<<" ";
    }
    cout<<": arr2" <<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<": arr"<<endl;
    delete[] arr;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<": arr"<<endl;
    return 0;
}