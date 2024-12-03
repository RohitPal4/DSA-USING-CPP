#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Class representing a graph
class Graph {
    int vertices;                    // Number of vertices
    vector<vector<int>> adjMatrix;   // Adjacency matrix

public:
    // Constructor
    Graph(int v) : vertices(v) {
        adjMatrix.resize(v, vector<int>(v, 0)); // Initialize matrix with 0s
    }

    // Add an edge to the graph (undirected graph assumed)
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    // Display the adjacency matrix
    void displayGraph() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // BFS traversal using a queue
    void bfs(int startVertex) {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        cout << "BFS Traversal: ";
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            // Visit all unvisited neighbors
            for (int i = 0; i < vertices; i++) {
                if (adjMatrix[current][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        cout << endl;
    }
};

// Main function to demonstrate the graph
int main() {
    int numVertices = 5;

    Graph g(numVertices);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Display the adjacency matrix
    g.displayGraph();

    cout << endl;

    // Perform BFS starting from vertex 0
    g.bfs(0);

    return 0;
}
