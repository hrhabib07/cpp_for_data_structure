#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        
        int max = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0 && v[i+1]==0)
            {
                count++;
            } else if (v[i] == 0 && v[i+1]!=0)
            {
                count++;
                if(count>=max) max=count;
                count=0;
            } else if (v[i]==0) {
                count++; 
                if(count>=max) max=count;
                count=0;
            }
        }

        cout<<max<<endl;

    }

    return 0;
}