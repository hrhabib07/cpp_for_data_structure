#include<bits/stdc++.h>
using namespace std;
class CustomSort{
    public:
        char c;
        int count;
};
bool com(CustomSort a, CustomSort b){
    if(a.count>b.count || (a.c>b.c && a.count==b.count )) return true;
    else return false;
}
int main(){
    CustomSort a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i].c=i+97;
        a[i].count=0;
    }

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        a[x-'a'].count++;
    }
    sort(a,a+26,com);

    for (char i = 'a'; i <= 'z'; i++)
    {
         if(a[i-'a'].count>0){
            for (int j = 0; j < a[i-'a'].count; j++)
            {
                cout<<a[i-'a'].c;
            }
            
        }
    }
    
    
    return 0;
}