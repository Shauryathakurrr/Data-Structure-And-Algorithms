#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
Node* insertatStart(Node* head, int y) {
    Node* x1 = new Node(y); 
    x1->next = head;        
    return x1;              
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    Node* n1 = new Node(20); 
    Node* n2 = new Node(30);
    Node* n3 = new Node(12);

    n1->next = n2;
    n2->next = n3;

    display(n1);

    Node* Z = insertatStart(n1, 101);
    display(Z);

    return 0;
}