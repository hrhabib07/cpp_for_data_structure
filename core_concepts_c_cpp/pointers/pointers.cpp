#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 15;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;

    cout << endl;
    cout << endl; // usign this extra line because my complier is giving gurbage values. I have tried to change the setting but I got frustrated after trying so many times so I am just working with the gurbage values.
    cout << num << " " << num_ptr << " " << num_ptr_ptr << endl;

    cout << *num_ptr << endl; // dereferance
    return 0;
}