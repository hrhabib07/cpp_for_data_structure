#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks;
};

struct cmp {
    bool operator()(const Student &a, const Student &b) {
        if (a.marks != b.marks)
            return a.marks < b.marks; 
        return a.roll > b.roll; 
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push(s);
    }

    int q;
    cin >> q;

    while (q--) {
        int type;
        cin >> type;

        if (type == 0) {
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            if (!pq.empty()) {
                auto top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << "\n";
            } else {
                cout << "Empty\n";
            }
        }
        else if (type == 1) {
            if (!pq.empty()) {
                auto top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << "\n";
            } else {
                cout << "Empty\n";
            }
        }
        else if (type == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    auto top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << "\n";
                } else {
                    cout << "Empty\n";
                }
            } else {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
