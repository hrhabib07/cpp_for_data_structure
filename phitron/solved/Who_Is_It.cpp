#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    float marks;

    Student(int id, string name, char section, float marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }

    Student() {}
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            int id;
            string name;
            char section;
            float marks;
            cin >> id >> name >> section >> marks;
            students[i] = Student(id, name, section, marks); // assign object to array
        }

        Student best = students[0];
        for (int i = 1; i < 3; i++)
        {
            if (students[i].marks > best.marks)
            {
                best = students[i];
            }
            else if (students[i].marks == best.marks && students[i].id < best.id)
            {
                best = students[i];
            }
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }

    return 0;
}
