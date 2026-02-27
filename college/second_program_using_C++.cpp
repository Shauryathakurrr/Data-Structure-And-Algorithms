#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void display(Node* head);   // 🔹 Function declaration

int main(){
    Node* n1 = new Node(20);
    Node* n2 = new Node(30);
    Node* n3 = new Node(12);

    n1->next = n2;
    n2->next = n3;

    display(n1);
}

void display(Node* head){
    Node* p = head;
    while(p){
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL";
}
