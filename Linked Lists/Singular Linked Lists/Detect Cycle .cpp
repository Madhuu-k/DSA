#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val):data(val), next(nullptr) {}
};

void createList(node* &start) {
    int val; cout << "Enter the data: ";
    cin >> val;
    node* newnode = new node(val);
    if (start == nullptr) {
        start = newnode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp = temp -> next;
    temp -> next = newnode;
}

bool isCycle(node* &start) {
    node* slow = start;
    node* fast = start;
    while (fast && fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if (slow == fast) return true;
    }
    return false;
}

int main() {
    int n; cout << "Enter number of nodes: ";
    cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    if (isCycle(start)) cout << "The Linked list is a cycle!";
    else cout << "The Linked List is not a cycle!";
    return 0;
}