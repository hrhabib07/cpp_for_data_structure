#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the size of the array: ";
    int n; cin>>n;
    cout<<endl;
    cout<<"Enter "<<n<<" elements"<<endl;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int numi; 
    cout<<"Enter the number of insertions: " ;
    cin>>numi;
    cout<<endl;
    for (int i = 0; i < numi; i++)
    {
        int ind,val;
        cout<<"Enter position and value to insert: ";
        cin>>ind>>val;
        v.insert(v.begin()+ind-1,val);    
    }
    
    cout<<"Current array after insertion : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number of Delete: " ;
    cin>>numi;
    cout<<endl;
    int opiton; 
    for (int i = 0; i < numi; i++)
    {
        cout<<"Select an option : "<<endl;
        cout<<"1. Delete with a poitoins "<<endl;
        cout<<"2. Delete by value "<<endl;
        cin>>opiton;
        if(opiton == 1){
            int ind;
            cout<<"Enter position to be deleted: ";
            cin>>ind;
            if(ind>0 && ind<=(v.size())) v.erase(v.begin()+ind-1);
            else cout<<"Out of the bound"<<endl;
        } else{
            int val;
            cout<<"Enter the value you want to delete. "<<endl;
            cin>>val; 
            auto it = find(v.begin(),v.end(),val);
            if(it!=v.end()) v.erase(it);
            else cout<<"Out of bound"<<endl;
        }
    }

    cout<<"Current array after insertion : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
