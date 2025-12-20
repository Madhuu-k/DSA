#include<iostream>
#include<deque>
#include <queue>
#include<vector>
using namespace std;

struct Tree {
    int data;
    Tree* left; Tree* right;
    Tree(int val): data(val), left(nullptr), right(nullptr) {}
};

vector<vector<int>> ZigZag(Tree* root) {
    vector<vector<int>> res;
    if (root == nullptr) return res;

    queue<Tree*> q;
    q.push(root);

    bool leftToRight = true;
    while (!q.empty()) {
        int size = q.size();
        deque<int> level;

        for (int i = 0; i < size; i++) {
            Tree* node = q.front();
            q.pop();

            if (leftToRight) level.push_back(node -> data);
            else level.push_front(node -> data);

            if (node -> left) q.push(node -> left);
            if (node -> right) q.push(node -> right);
        }
        res.push_back(vector<int>(level.begin(), level.end()));
        leftToRight = !leftToRight;
    }
    return res;
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> left -> right = new Tree(5);
    root -> left -> right -> right = new Tree(7);
    root -> right -> right = new Tree(8);
    vector<vector<int>> ans = ZigZag(root);
    for (auto& it : ans) {
        for (int x : it) cout << x << " " ;
    }
    return 0;
}