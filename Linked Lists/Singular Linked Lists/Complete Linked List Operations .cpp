#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr) {}
};

ListNode* start = nullptr;

ListNode* createNode(ListNode* start, int val) {
    ListNode* newNode = new ListNode(val);
    if (start == nullptr) {
        start = newNode;
        start -> next = nullptr;
    }
    else {
        ListNode* temp = start;
        while (temp -> next != nullptr) temp = temp -> next;
        temp -> next = newNode;
        newNode -> next = nullptr;
    }

    return start;
}


// INSERTION OPERATIONS

ListNode* insertAtBegin(int val) {
    ListNode* newNode = new ListNode(val);
    if (start == nullptr) {
        start = newNode;
        newNode -> next = nullptr;
    }
    else {
        newNode -> next = start;
        start = newNode;
    }
    return start;
}

ListNode* insertAtEnd(int val) {
    ListNode* newNode = new ListNode(val);
    if (start == nullptr) {
        start = newNode;
        newNode -> next = nullptr;
    }
    else {
        ListNode* temp = start;
        while (temp -> next != nullptr) temp = temp -> next;
        temp -> next = newNode;
        newNode -> next = nullptr;
    }
    return start;
}

ListNode* insertAtPos(int val, int pos) {
    ListNode* newNode = new ListNode(val);
    if (start == nullptr) return insertAtBegin(val);
    else {
        ListNode* temp = start;
        for (int i = 0; i < pos - 1 && temp != nullptr; i++) temp = temp -> next;
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
    return start;
}

// DELETE OPERATIONS

ListNode* deleteAtBegin() {
    if (start == nullptr) return nullptr;
    ListNode* temp = start;
    start = start->next;
    delete temp;
    return start;
}

ListNode* deleteAtEnd() {
    if (start == nullptr) return nullptr;
    ListNode* temp = start;
    while (temp -> next -> next != nullptr) temp = temp -> next;
    delete temp -> next;
    temp -> next = nullptr;

    return start;
}

ListNode* deleteAtPos(int pos) {
    if (start == nullptr) return nullptr;
    if (pos == 0) return deleteAtBegin();

    ListNode* temp = start;
    for (int i = 0; i < pos - 1; i++) temp = temp -> next;
    ListNode *toDelete = temp -> next;
    temp -> next = toDelete -> next;
    delete toDelete;

    return start;
}

// REVERSE LIST

ListNode* reverseList() {
    ListNode* prev = nullptr;
    ListNode* curr = start;
    while (curr != nullptr) {
        ListNode* currNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = currNode;
    }
    start = prev;
    return start;
}

// DISPLAY THE LIST

void DisplayList(ListNode* start) {
    ListNode* temp = start;
    while (temp != nullptr) {
        cout << temp -> val << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Insert some nodes
    start = insertAtBegin(10);
    start = insertAtEnd(20);
    start = insertAtEnd(30);
    start = insertAtPos(25, 2); // insert 25 at position 2 (0-based indexing)

    cout << "List after insertions: ";
    DisplayList(start);

    // Delete operations
    start = deleteAtBegin();
    cout << "List after deleting at beginning: ";
    DisplayList(start);

    start = deleteAtEnd();
    cout << "List after deleting at end: ";
    DisplayList(start);

    start = deleteAtPos(1); // delete node at position 1
    cout << "List after deleting at position 1: ";
    DisplayList(start);

    // Reverse the list
    start = reverseList();
    cout << "List after reversal: ";
    DisplayList(start);

    return 0;
}