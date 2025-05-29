#include <bits/stdc++.h>
using namespace std;

const int mx = 1000;
char adjMat[mx][mx];
bool visited[mx][mx];

int dx[] = {-1, 1, 0, 0}; // up, down
int dy[] = {0, 0, -1, 1}; // left, right

int main() {
    int n, m;
    cin >> n >> m;

    int si, sj, ti, tj;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> adjMat[i][j];
            if (adjMat[i][j] == 's') {
                si = i;
                sj = j;
            }
            if (adjMat[i][j] == 't') {
                ti = i;
                tj = j;
            }
        }
    }

    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && (adjMat[nx][ny] == '.' || adjMat[nx][ny] == 't')) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }

    if (visited[ti][tj]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
