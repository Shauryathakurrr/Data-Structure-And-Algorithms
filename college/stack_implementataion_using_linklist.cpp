#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }


    void push(int x) {
        Node* newNode = new Node(x);

        if (newNode == NULL) {
            cout << "Stack Overflow\n";
            return;
        }

        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }


    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        cout << temp->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }


    void peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }


    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();
    s.peek();

    return 0;
}