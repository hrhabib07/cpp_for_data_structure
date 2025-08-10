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
    //     while(j>=0 && a[j]>key){
    //         a[j+1] = a[j];
    //         j--;
    //     }
    //     a[j+1] = key;
    // }

    // selection sort 
    for (int i = 0; i < n-1; i++)
    {
        int curmin = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]< a[curmin]) curmin = j;
        }
        if(curmin!=i){
            swap(a[i],a[curmin]);
        }
        
    }
    
    


    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}
