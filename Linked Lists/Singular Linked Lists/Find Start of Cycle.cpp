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

node* CycleStart(node* &start) {
    if (!start) return nullptr;

    node* slow = start;
    node* fast = start;

    do {
        if (!fast || !fast -> next) return nullptr;
        slow = slow -> next;
        fast = fast -> next -> next;
    } while (slow != fast);

    slow = start;

    while (slow != fast) {
        slow = slow -> next;
        fast = fast -> next;
    }

    return slow;
}

int main() {
    int n; cout << "Enter the number of nodes: ";
    cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    node* startOfCycle = CycleStart(start);
    cout << "Starting of Cycle: " << startOfCycle -> data << endl;
    return 0;
}