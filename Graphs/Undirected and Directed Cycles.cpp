#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class UndirectedGraph{
private:
    bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;

        for (int neighbour : adj[node]) {
            if (!visited[neighbour] && dfs(neighbour, node, adj, visited)) return true;
            else if (neighbour != parent) return true;
        }

        return false;
    }

public:
    bool isCycle(vector<vector<int>>& adj, int V) {
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]&& dfs(i, -1, adj, visited)) return true;
        }

        return false;
    }
};

class DirectedGraph {
private:
    bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& pathVisited) {
        visited[node] = true;
        pathVisited[node] = true;

        for (int neighbour : adj[node]) {
            if (!visited[neighbour] && dfs(neighbour, node, adj, visited, pathVisited)) return true;
            else if (pathVisited[neighbour]) return true;
        }

        return false;
    }

public:
    bool isCycle(vector<vector<int>>& adj, int V) {
        vector<bool> visited(V, false);
        vector<bool> pathVisited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i] && dfs(i, -1, adj, visited, pathVisited)) return true;
        }

        return false;
    }
};