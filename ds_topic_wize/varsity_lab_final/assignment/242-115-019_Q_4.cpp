#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<vector<int>>& adjList, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (auto neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adjList, visited);
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adjList(vertices);

    cout << "Enter edges (u v) [0-indexed]:\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }

    int start;
    cout << "Enter starting vertex for DFS: ";
    cin >> start;

    vector<bool> visited(vertices, false);
    cout << "DFS Traversal: ";
    DFS(start, adjList, visited);
    cout << endl;

    return 0;
}
