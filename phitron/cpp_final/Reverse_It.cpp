#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    char sect;
    int mark;
};

int main() {
    int n; cin>>n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].sect>>a[i].mark;
    }
    for (int i = 0; i < n/2; i++)
    {
        char temp = a[i].sect;
        a[i].sect = a[n-1-i].sect;
        a[n-1-i].sect = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].sect<<" "<<a[i].mark<<endl;
    }
    

    return 0;
}
