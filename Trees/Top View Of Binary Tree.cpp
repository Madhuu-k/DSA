#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree(int data): val(data), left(nullptr), right(nullptr) {}
};

vector<int> TopView(Tree* root) {
    vector<int> ans;
    if (root == nullptr) return ans;

    map<int, int> mp;
    queue<pair<Tree*, int>> q;

    q.push({root, 0});
    while (!q.empty()) {
        auto front = q.front();
        q.pop();

        Tree* node = front.first;
        int hd = front.second;

        if (mp.find(hd) == mp.end()) mp[hd] = node -> val;

        if (node -> left) q.push({node -> left, hd - 1});
        if (node -> right) q.push({node -> right, hd + 1});
    }

    for (auto it : mp) ans.push_back(it.second);

    return ans;
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> left -> right = new Tree(5);
    root -> right -> left = new Tree(6);
    root -> right -> right = new Tree(7);
    vector<int> ans = TopView(root);
    for (auto it : ans) cout << it << " ";
    return 0;
}