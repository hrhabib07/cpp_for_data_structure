#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int avgMark;
};
int main(){
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,s[i].name);
        cin>>s[i].roll>>s[i].avgMark;
        getchar();
    }
    Student mx;
    mx.avgMark=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(s[i].avgMark>mx.avgMark){
            mx=s[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.avgMark<<endl;
    
    return 0;
}