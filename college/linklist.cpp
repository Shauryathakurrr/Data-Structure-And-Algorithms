#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
                                        
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insert(int value) {
        Node* newNode = new Node(value);

        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL";
    }
};

int main() {

    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List: ";
    list.display();

    return 0;
}