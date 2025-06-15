#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    string nm;
    int cls;
    char s;
    int id;
    float math_marks;
    float eng_marks;
};
bool comp(Student l, Student r){
    float el = l.eng_marks;
    float er = r.eng_marks;
    float ml = l.math_marks;
    float mr = r.math_marks;
    return (el == er) ? (ml==mr? l.id<r.id : ml>mr ) : el>er;
}
int main() {
    
    int n; cin>>n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a,a+n,comp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    

    return 0;
}
