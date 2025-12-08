#include<iostream>
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

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    Node* start = nullptr;
    createList(start, n);
    displayList(start);
    return 0;
}