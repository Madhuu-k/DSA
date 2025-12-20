#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;

    Tree(int val): data(val), left(nullptr), right(nullptr) {}
};

vector<int> LeftView(Tree* root) {
    vector<int> ans;
    if (root == nullptr) return ans;

    queue<Tree*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            Tree* node = q.front();
            q.pop();

            if (i == 0) ans.push_back(node -> data);
            if (node -> left) q.push(node -> left);
            if (node -> right) q.push(node -> right);
        }
    }

    return ans;
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> left -> right = new Tree(5);
    root -> left -> right -> right = new Tree(7);
    root -> right -> right = new Tree(8);
    vector<int> ans = LeftView(root);
    for (auto it : ans) cout << it << " ";
    return 0;
}