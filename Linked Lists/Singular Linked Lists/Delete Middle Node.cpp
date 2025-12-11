#include<iostream>
#include<vector>
using namespace std;


struct Node {
    int data;
    Node* next;
};

Node* getNode() {
    Node* newNode = new Node();
    cout << "Enter node: ";
    cin >> newNode -> data;
    newNode -> next = nullptr;
    return newNode;
}

void createList(Node*& start, int n) {
    for (int i = 0; i < n; i++) {
        Node* newNode = getNode();
        if (start == nullptr) start = newNode;
        else {
            Node* temp = start;
            while (temp -> next != nullptr) temp = temp -> next;
            temp -> next = newNode;
        }
    }
}

void displayList(Node* start) {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

Node* deleteMiddle(Node* &start) {
    if (!start || !start -> next) return nullptr;

    Node* slow = start;
    Node* fast = start;
    Node* prev = nullptr;

    while (fast && fast -> next) {
        fast = fast -> next -> next;
        prev = slow;
        slow = slow -> next;
    }

    prev -> next = slow -> next;
    delete slow;

    return start;
}

int main() {
    Node* start = nullptr;
    int n; cout << "Enter number of nodes: ";
    cin >> n;
    createList(start, n);
    displayList(start);
    deleteMiddle(start);
    displayList(start);
    return 0;
}