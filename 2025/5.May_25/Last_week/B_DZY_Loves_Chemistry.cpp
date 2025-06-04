#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 123;
vector<int> adj[mx];
bool visited[mx];
long long int r = 1;

void dfs(int u, int &size) {
    visited[u] = true;
    size++;
    for (auto v : adj[u]) {
        if (!visited[v]) {
            dfs(v, size);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int size = 0;
            dfs(i, size);
            r *= (1LL << (size - 1));  
        }
    }

    cout << r << endl;
    return 0;
}
