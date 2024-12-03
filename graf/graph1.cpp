#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Class representing a graph
class Graph {
    int vertices;                          // Number of vertices
    vector<vector<int>> adjList;           // Adjacency list

public:
    Graph(int v) : vertices(v) {
        adjList.resize(v);
    }

    // Add an edge to the graph (undirected graph assumed)
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // Display the adjacency list
    void displayGraph() {
        for (int i = 0; i < vertices; i++) {
            cout << i << " -> ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
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
            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
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

    cout << "Graph Representation (Adjacency List):" << endl;
    g.displayGraph();

    cout << endl;

    // Perform BFS starting from vertex 0
    g.bfs(0);

    return 0;
}
