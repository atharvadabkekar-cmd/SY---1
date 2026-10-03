#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}


Node* concatenate(Node* head1, Node* head2) {
    if (head1 == NULL)
        return head2;

    Node* temp = head1;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head2;

    return head1;
}

int main() {
    
    Node* head1 = createNode(10);
    head1->next = createNode(20);
    head1->next->next = createNode(30);

    
    Node* head2 = createNode(40);
    head2->next = createNode(50);
    head2->next->next = createNode(60);

    cout << "First List: ";
    display(head1);

    cout << "Second List: ";
    display(head2);

    // Concatenate
    head1 = concatenate(head1, head2);

    cout << "After Concatenation: ";
    display(head1);

    return 0;
}