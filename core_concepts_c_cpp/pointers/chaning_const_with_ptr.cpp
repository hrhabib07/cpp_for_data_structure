#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int frnd_marks = 99;
    int *teacher_sheet = &frnd_marks;
    *teacher_sheet = 79;

    cout << frnd_marks << endl;
    return 0;
}