#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

void createList(node* &start) {
    int num; cout << "Enter node value: ";
    cin >> num;
    node* newnode = new node(num);
    if (start == nullptr) {
        start = newnode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp = temp -> next;
    temp -> next = newnode;
}

void displayList(node* start) {
    if (start == nullptr) return;
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

node* NthFromEnd(node* start, int n) {
    node* fast = start;
    node* slow = start;

    for (int i = 0; i < n; i++) {
        if (!fast) return nullptr;
        fast = fast -> next;
    }

    while (fast) {
        fast = fast -> next;
        slow = slow -> next;
    }

    return slow;
}

int main() {
    node* start = nullptr;
    int n; cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) createList(start);
    int nth; cout << "Enter Nth node to find: "; cin >> nth;
    node* middle = NthFromEnd(start, nth);
    cout << "Nth Node: " << middle -> data << endl;
    return 0;
}