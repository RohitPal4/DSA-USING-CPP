// phone pay problem
#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<queue> 
using namespace std;
void Creategraph(vector<vector<int>>& arr, int n, int dir){
    for(int i=0; i<n; i++){
        int u, v;
        cout << "enter u and v : ";
        cin>> u >> v;
        arr[u][v] = 1;
        if(dir==0){
            arr[v][u]= 1;
        }
    }
}
vector<int> bfs(vector<vector<int>> arr){
    queue<int> q;
    unordered_set<int> vis;
    vector<int> res;

    int t = arr[0][0];
    q.push(t);
    while(!q.empty()){
        int f = q.front();
        res.push_back(f);
        for(auto node: arr[f]){
            if(vis.find(node) == vis.end()){
                vis.insert(node);
                q.push(node);
            }
        } 
    }
    return res;
}

void creategraf(int n){
    unordered_map<int, vector<int>>mp;
    for(int i=0; i<n; i++){
        int u, v;
        cout << "enter u and v : ";
        cin>> u >> v;
        mp[u].push_back(v);

        if(mp.find(u) != mp.end()){
            mp[i].push_back(v);
        }

    }
}
void printgraph(vector<vector<int>> arr, int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, dir;
    cout << "enter number of nodes: "<< endl;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    cout << "enter dir: " << endl;
    cin >> dir;

    Creategraph(arr, n, dir);
    printgraph(arr, n);

    return 0;
}


