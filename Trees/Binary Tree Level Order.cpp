#include<iostream>
#include <queue>
#include<vector>
using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree(int x): val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrder(Tree* root) {,
    vector<vector<int>> ans;
    if (root == nullptr) return ans;
    queue<Tree*> q;
    q.push(root);
    while (!q.empty()) {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Tree *node = q.front();
            q.pop();
            level.push_back(node -> val);
            if (node -> left) q.push(node -> left);
            if (node -> right) q.push(node -> right);
        }
        ans.push_back(level);
    }
    return ans;
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> left -> right = new Tree(5);
    root -> right -> right = new Tree(6);
    vector<vector<int>> ans = levelOrder(root);
    for (auto v: ans) {
        for (auto i : v) {
            cout << i << " ";
        }
    }
    return 0;
}