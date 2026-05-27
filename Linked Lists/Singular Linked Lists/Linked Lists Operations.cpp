#include<bits/c++io.h>
using namespace std;

struct Node {
    Node* next;
    int val;
    Node(int x): val(x), next(nullptr) {}
};

Node* start = nullptr;
Node* createNode(int val, Node* start) {
    Node* newNode = new Node(val);
    if (start == nullptr) {
        start = newNode;
        newNode -> next = nullptr;
    }

    else {
        Node* temp = start;
        while (temp -> next != nullptr) temp = temp -> next;
        temp -> next = newNode;
        newNode -> next =nullptr;
    }

    return start;
}

Node* insertAtPos(Node* start, int pos, int val) {
    if (start == nullptr) return nullptr;
    Node* newNode = new Node(val);
    Node* temp = start;
    for (int i = 0; i < pos - 1; i++) temp = temp -> next;
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

Node* deleteAtPos(int pos) {
    Node* temp = start;
    // if pos == 0 which is start then call delte at first func
    for (int i = 0; i < pos - 1; i++) temp = temp -> next;
    Node* toDelete = temp -> next;
    temp -> next = toDelete->next;
    delete toDelete;

    return start;
}

Node* reverseList() {
    Node* prev = nullptr;
    Node* curr = start;
    while (curr != nullptr) {
        Node* nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }
    start = prev;
    return start;
}
