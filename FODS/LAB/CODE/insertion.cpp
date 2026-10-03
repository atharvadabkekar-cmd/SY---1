#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev
};

Node *head = NULL;

void insertAtBeginning()
{
    int value;

    cout << "Enter value: ";
    cin >> value;

    Node *newNode = new Node;

    newNode->data = value;
    newNode->prev = Null;
    newNode->next = head;
    head = newNode;

    cout << "Node inserted at beginning.\n";
}


void insertAtEnd()
{
    int value;

    cout << "Enter value: ";
    cin >> value;

    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Node inserted at end.\n";
}


void insertAtPosition()
{
    int value, position;

    cout << "Enter value: ";
    cin >> value;

    cout << "Enter position: ";
    cin >> position;

    if (position <= 0)
    {
        cout << "Invalid position.\n";
        return;
    }

    if (position == 1)
    {
        insertAtBeginning();
        return;
    }

    Node *temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid position.\n";
        return;
    }

    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Node inserted at position "
         << position << ".\n";
}


void insertion()
{
    int choice;

    cout << "\n===== INSERTION =====\n";
    cout << "1. Insert at Beginning\n";
    cout << "2. Insert at End\n";
    cout << "3. Insert at Specific Position\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            insertAtBeginning();
            break;

        case 2:
            insertAtEnd();
            break;

        case 3:
            insertAtPosition();
            break;

        default:
            cout << "Invalid choice.\n";
    }
}

// Display list for testing
void display()
{
    Node *temp = head;

    cout << "\nLinked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    int choice;

    do
    {
        insertion();

        cout << "\nDo you want to insert again?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "Enter choice: ";
        cin >> choice;

    } while (choice == 1);

    display();

    return 0;
}