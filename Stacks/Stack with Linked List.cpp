#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val): data(val), next(nullptr) {}
};

node* top = nullptr;

void push(int x) {
    node* newnode = new node(x);
    newnode -> next = top;
    top = newnode;
}

void pop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }
    node* temp = top;
    top = top -> next;
    delete temp;
}

bool isEmpty() {
    return top == nullptr;
}

int getTop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }
    return top -> data;
}

void printStack() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }
    node* temp = top;
    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    push(1);
    push(2);
    push(3);

    printStack();        // 3 2 1
    cout << top() << endl;  // 3

    pop();
    cout << top() << endl;  // 2

    return 0;
}