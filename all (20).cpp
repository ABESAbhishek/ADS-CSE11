#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int info;
    Node* next;

    Node(int i) {
        info = i;
        next = nullptr;
    }
};

void push(Node*& top, int item) {
    Node* temp = new Node(item);
    temp->next = top;
    top = temp;

    cout << item << " pushed into stack\n";
}

int Pop(Node*& top) {
    if (top == nullptr) {
        cout << "Underflow\n";
        return -1;
    }

    Node* temp = top;
    int item = temp->info;

    top = top->next;
    delete temp;

    cout << item << " popped from stack\n";
    return item;
}

int Peek(Node* top) {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return -1;
    }

    return top->info;
}

void traverse(Node* top) {
    cout << "Stack: ";

    Node* temp = top;

    while (temp != nullptr) {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* top = nullptr;

    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);

    traverse(top);

    cout << "Top element: " << Peek(top) << endl;

    Pop(top);
    Pop(top);

    traverse(top);

    cout << "Top element: " << Peek(top) << endl;

    Pop(top);
    Pop(top);
    Pop(top);

    traverse(top);

    return 0;
}