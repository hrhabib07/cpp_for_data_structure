#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<string, int>> vp1;
        vector<pair<string, int>> vp2;
        vector<pair<string, int>> vp3;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            vp1.push_back({s, 3});
        }
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                auto [f, sec] = vp1[i];
                if (s == f)
                {
                    vp1[i].second = 1;
                    res = 1;
                }
            }
            if (!res)
            {
                vp2.push_back({s, 3});
            }
            else
            {
                vp2.push_back({s, 1});
            }
        }
        for (int j = 0; j < n; j++)
        {
            int score = 3;
            string s;
            cin >> s;
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                auto [f, sec] = vp2[i];
                auto [fvp1, secvp1] = vp1[i];
                if (s == f && sec == 1)
                {
                    for (int k = 0; k < n; k++)
                    {
                        auto [f1, sec1] = vp1[k];
                        if (f1 == s)
                        {
                            vp1[k].second = 0;
                            res = 1;
                            break;
                        }
                    }
                    vp2[i].second = 0;
                    score = 0;
                    res = 1;
                }
                if (s == f && sec != 1)
                {

                    vp2[i].second = 1;
                    score = 1;
                    res = 1;
                }
                if(s==fvp1){
                    vp1[i].second = 1;
                    score = 1;
                    res = 1;
                }
            }
            if (!res)
            {
                vp3.push_back({s, 3});
            }
            else
            {
                vp3.push_back({s, score});
            }
        }
        int score1 = 0, score2 = 0, score3 = 0;
        for (int i = 0; i < n; i++)
        {
            score1 += vp1[i].second;
            score2 += vp2[i].second;
            score3 += vp3[i].second;
        }
        cout << score1 << " " << score2 << " " << score3 << nl;
    }

    return 0;
}
