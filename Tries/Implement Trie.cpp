#include<iostream>
using namespace std;

struct Trie{
    Trie* children[26];
    bool isEnd;
    Trie() {
        for (int i = 0; i < 26; i++) children[i] = nullptr;
        isEnd = false;
    }
}

void insert(Trie* root, string word) {
    Trie* node = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (node -> children[index] == nullptr) node -> children[index] = new Trie();
        node = node -> children[index];
    }
    node -> isEnd = true;
}

bool search(Trie* root, string word) {
    Trie* node = root;
    for (char ch: word) {
        int index = ch - 'a';
        if (node -> children[index] == nullptr) return false;
        node = node -> children[index];
    }
    return node -> isEnd;
}

bool startsWith(Trie* root, string word) {
    Trie* node = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (node -> children[index] == nullptr) return false;
        node = node -> children[index];
    }
    return true;
}