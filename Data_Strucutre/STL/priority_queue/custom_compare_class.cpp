#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;
    Student(string name, int roll,int mark){
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class cmp{
    public:
     bool operator()(Student l,Student r){
        if(l.mark < r.mark) return true;
        else if(l.mark > r.mark) return false;
        else return l.roll > r.roll;
     }
};

int main() {
    priority_queue<Student,vector<Student>,cmp>pq;
    int n; cin>>n;
    while (n--)
    {
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        Student obj(name,roll,mark);
        pq.push(obj);
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        if(x==0){
            string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        Student obj(name,roll,mark);
        pq.push(obj);
        } else if (x==1){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
        } else {
            pq.pop();
        }
    }

    return 0;
}
