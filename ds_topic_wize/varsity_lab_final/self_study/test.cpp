#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    // insertion sort 
    // for (int i = 1; i < n; i++)
    // {
    //     int j = i-1;
    //     int key = a[i];
    //     while (j>=0 && key<a[j])
    //     {
    //         a[j+1]= a[j];
    //         j--;
    //     }
    //     a[j+1] = key;
    // }
    


    // selection sort
    // for (int i = 0; i < n-1; i++)
    // {
    //     int minind = i;
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(a[j]<a[minind]) minind = j;
    //     }
    //     if(minind !=i) swap(a[minind],a[i]);
        
    // }
    

    // bubble sort 
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(a[j]<a[i]) swap(a[i],a[j]);
        }
        
    }
    


    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}
