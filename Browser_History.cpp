#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> ls;
    string str;

    
    while (cin >> str)
    {
        if (str == "end") break;
        ls.push_back(str);
    }

    int t;
    cin >> t;

    auto temp = ls.begin(); 

    while (t--)
    {
        string input;
        cin >> ws;
        getline(cin, input); 

        stringstream ss(input);
        string command, address;
        ss >> command;

        if (command == "visit")
        {
            ss >> address; 
            bool found = false;
            for (auto it = ls.begin(); it != ls.end(); ++it)
            {
                if (*it == address)
                {
                    temp = it;
                    cout << *temp << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto nextIt = temp;
            ++nextIt;
            if (nextIt != ls.end())
            {
                temp = nextIt;
                cout << *temp << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (temp != ls.begin())
            {
                --temp;
                cout << *temp << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
