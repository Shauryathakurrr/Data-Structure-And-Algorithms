#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void display(struct Node *head){
    struct Node *p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}

int main(){
    struct Node *n1;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2;
    n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3;
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n1->data = 10;
    n1->next = n2;
    n2->data = 20;
    n2->next = n3;
    n3->data = 30;
    n3->next = NULL;
    display(n1);
    return 0;

}