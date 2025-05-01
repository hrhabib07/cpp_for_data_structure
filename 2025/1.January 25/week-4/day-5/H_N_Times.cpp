#include<bits/stdc++.h>
using namespace std;
void printChar(int num,char ch){
    for (int i = 0; i < num; i++)
    {
        if(i!=num-1){
            cout<<ch<<" ";
        } else{
            cout<<ch;
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n; char c;
        cin>>n>>c;
        printChar(n,c);
    }
    
    return 0;
}