#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> TopologicalSort(vector<vector<int>>& adj, int nodes) {
    vector<int> indegree(nodes, 0);

    for (int i = 0; i < nodes; i++) {
        for (int neighbour : adj[i]) indegree[neighbour]++;
    }

    queue<int> q;
    for (int i = 0; i < indegree.size(); i++) {
        if (indegree[i] == 0) q.push(i);
    }

    vector<int> res;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        res.push_back(node);

        for (int neighbour : adj[node]) {
            indegree[neighbour]--;

            if (indegree[neighbour] == 0) res.push_back(neighbour);
        }
    }

    return res;
}

int main() {

    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj(nodes);

    for (int i = 0; i < edges; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    vector<int> topo = TopologicalSort(adj, nodes);

    if (topo.size() != nodes) {
        cout << "Cycle Exists";
    }
    else {
        cout << "Topological Order:\n";

        for (int node : topo)
            cout << node << " ";
    }
}