#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

struct CustomCompare
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.first == b.first)
            return a.second > b.second; // smaller second has higher priority
        return a.first < b.first;       // larger first has higher priority
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, bool>> vp;
    vector<int> amount;
    vector<bool> serverd;
    amount.push_back(-1);
    serverd.push_back(false);

    queue<int> q;
    priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> pq;
    int ind = 0;
    for (int i = 1; i <= n; i++)
    {
        int numb;
        cin >> numb;
        if (numb == 1)
        {
            ++ind;
            int x;
            cin >> x;
            amount.push_back(x);
            serverd.push_back(false);
            q.push(ind);
            pq.push({x, ind});
        }
        else if (numb == 2)
        {
            while (!q.empty() && serverd[q.front()])
                q.pop();

            if (!q.empty())
            {
                cout << q.front() << ' ';
                serverd[q.front()] = true;
                q.pop();
            }
        }
        else if (numb == 3)
        {
            while (!pq.empty() && serverd[pq.top().second])
                pq.pop();
            if (!pq.empty())
            {
                cout << pq.top().second << " ";
                serverd[pq.top().second] = true;
                pq.pop();
            }
        }
    }

    return 0;
}
