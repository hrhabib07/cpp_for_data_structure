#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> monsters(n);
        for (int i = 0; i < n; ++i) {
            cin >> monsters[i].first >> monsters[i].second;
        }
        
        // Compute original min and max
        int min_x = INT_MAX, max_x = INT_MIN;
        int min_y = INT_MAX, max_y = INT_MIN;
        for (auto m : monsters) {
            min_x = min(min_x, m.first);
            max_x = max(max_x, m.first);
            min_y = min(min_y, m.second);
            max_y = max(max_y, m.second);
        }
        long long original_area = (max_x - min_x + 1LL) * (max_y - min_y + 1LL);
        
        long long min_area = original_area;
        
        for (int i = 0; i < n; ++i) {
            int curr_x = monsters[i].first;
            int curr_y = monsters[i].second;
            
            // Compute new min and max excluding current monster
            int new_min_x = INT_MAX, new_max_x = INT_MIN;
            int new_min_y = INT_MAX, new_max_y = INT_MIN;
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                new_min_x = min(new_min_x, monsters[j].first);
                new_max_x = max(new_max_x, monsters[j].first);
                new_min_y = min(new_min_y, monsters[j].second);
                new_max_y = max(new_max_y, monsters[j].second);
            }
            
            // Calculate the area if we move the current monster into the new rectangle
            long long new_area = (new_max_x - new_min_x + 1LL) * (new_max_y - new_min_y + 1LL);
            min_area = min(min_area, new_area);
        }
        
        cout << min_area << endl;
    }
    return 0;
}