#include<iostream>
#include<stack>
using namespace std;

int st[100];
int top = -1;

void push(int x) {
    if (top == 99) {
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    st[top] = x;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }
    top--;
}

int getTop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return st[top];
}

void printStack() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = 0; i <= top; i++) {
        cout << st[i] << "\n";
    }
    cout << endl;
}

void isEmpty() {
    if (top == -1) {
        cout << "Stack is Empty!" << endl;;
    }
    cout << "Stack is not Empty!" << endl;;
}

int getSize() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }

    return top + 1;
}

void clearStack() {
    top = -1;
}

int main() {
    push(10);
    push(20);
    push(40);

    printStack();
    pop();

    isEmpty();

    push(30);
    printStack();
    getTop();

    cout << "Size of stack: " << getSize() << endl;
    clearStack();

    isEmpty();
    printStack();
    return 0;
}
