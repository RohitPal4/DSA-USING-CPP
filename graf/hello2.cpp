//DFS Traversal 
#include<iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <map>
using namespace std;


bool iscycle(int V, map<int, vector<int>> &adj) {
    bool res = false;
    vector<int> Result;    
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;


    for (int i = 0; i < V; ++i) {  // To handle disconnected components
        if (!visited[i]) {
            stack<pair<int, int>> s; 
            s.push({i, -1});    // Start DFS from node i

            while (!s.empty()) {
                auto t = s.top();
                s.pop();
                int curr = t.first;
                int parr = t.second;
                if (!visited[curr]) {
                    parent[curr] = parr;
                    visited[curr] = true;
                    
                }

                for (int neighbor : adj[curr]) {
                    if (!visited[neighbor]) {
                        s.push({neighbor, curr});
                    }else if(neighbor != parr){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    // Number of vertices in the graph
    int V = 6;
    // Adjacency list representation of the graph using map
    map<int, vector<int>> adj = {
        {0, {1}},        // Adjacency list for vertex 0
        {1, {0, 2, 3}},  // Adjacency list for vertex 1
        {2, {1, 3, 4}},  // Adjacency list for vertex 2
        {3, {1, 2}},     // Adjacency list for vertex 3
        {4, {2, 5}},     // Adjacency list for vertex 4
        {5, {4}}         // Adjacency list for vertex 5
    };

    bool result = iscycle(V, adj);
    if(result){
        cout << "cycle" << endl;
    }else{
        cout << "not cycle" << endl;
    }
    return 0;
}