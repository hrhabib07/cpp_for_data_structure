#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    // Adjacency Matrix
    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));

    // Adjacency List
    vector<vector<int>> adjList(vertices);

    cout << "Enter edges (u v) [0-indexed]:\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        // For undirected graph (if directed, remove one of them)
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < vertices; i++) {
        cout << i << ": ";
        for (auto x : adjList[i]) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
