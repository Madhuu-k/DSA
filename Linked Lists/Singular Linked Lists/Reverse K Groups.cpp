#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

void insertAtTail(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* reverseKGroup(ListNode* start, int k) {
    if (start == nullptr) return nullptr;
    ListNode* temp = start;
    ListNode* kth = temp;
    for (int i = 0 ; i < k; i++) {
        if(kth == nullptr) return start;
        kth = kth->next;
    }
    ListNode* prev = kth;
    while (temp != kth) {
        ListNode* nextNode = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = nextNode;
    }
    start -> next = reverseKGroup(kth, k);
    return prev;
}

int main() {
    ListNode* head = nullptr;

    // Example: 1 2 3 4 5
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    int k = 2;

    cout << "Original List: ";
    printList(head);

    head = reverseKGroup(head, k);

    cout << "After Reverse K Group: ";
    printList(head);

    return 0;
}