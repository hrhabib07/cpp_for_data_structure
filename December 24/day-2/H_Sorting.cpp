#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int j = n; j > 0; j--)
    {
       for (int i = 0; i < j-1; i++)
    {
        if(arr[i]>arr[i+1]){
            // int temp = arr[i];
            // arr[i] = arr[+1];
            // arr[i+1] = temp;
            swap(arr[i], arr[i+1]);
        } 
    }
    }
    
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}