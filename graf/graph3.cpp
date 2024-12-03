#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <string>
using namespace std;

// Class representing a directed graph
class DirectedGraph {
    map<string, vector<string>> adjList; // Adjacency list using map

public:
    // Add a directed edge to the graph
    void addEdge(const string& u, const string& v) {
        adjList[u].push_back(v);

    }

    // Display the adjacency list
    void displayGraph() {
        cout << "Adjacency List:" << endl;
        for (const auto& pair : adjList) {
            cout << pair.first << " -> ";
            for (const auto& neighbor : pair.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    // BFS traversal using a queue
    void bfs(const string& startVertex) {
        map<string, bool> visited; // To keep track of visited nodes
        queue<string> q;

        visited[startVertex] = true;
        q.push(startVertex);

        cout << "BFS Traversal: ";
        while (!q.empty()) {
            string current = q.front();
            q.pop();
            cout << current << " ";

            // Visit all unvisited neighbors
            for (const auto& neighbor : adjList[current]) {
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
    DirectedGraph g;

    g.addEdge("A", "B");
    g.addEdge("A", "C");
    g.addEdge("B", "D");
    g.addEdge("C", "D");
    g.addEdge("D", "E");

    // Display the adjacency list
    g.displayGraph();

    cout << endl;

    // Perform BFS starting from vertex "A"
    g.bfs("A");

    return 0;
}
