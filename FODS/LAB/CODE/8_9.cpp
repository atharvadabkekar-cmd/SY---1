#include <iostream>
using namespace std;

struct Node
{
    int data;       

    Node* next;     

    Node* prev;     
};

Node* head = NULL;

void insertStart(int value)
{
    
    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;

    newNode->next = head;

    if (head != NULL)
    {
        head->prev = newNode;
    }

   
    head = newNode;
}

void insertEnd(int value)
{
    
    Node* newNode = new Node();

    
    newNode->data = value;

    newNode->next = NULL;


    if (head == NULL)
    {
        newNode->prev = NULL;

        head = newNode;

        return;
    }


    
    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertPosition(int value, int position)
{
    if (position <= 0)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 1)
    {
        insertStart(value);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Position does not exist!" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;

    newNode->next = temp->next;

    newNode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

void deleteStart()
{

    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }
    delete temp;
}

void deleteEnd()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    if (temp->next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;

    delete temp;
}

void deletePosition(int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (position <= 0)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (position == 1)
    {
        deleteStart();
        return;
    }


    // Start from the first node
    Node* temp = head;

    for (int i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Position does not exist!" << endl;
        return;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void displayForward()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;


    cout << "Forward: ";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void displayBackward()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << "Backward: ";

    while (temp != NULL)
    {

        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main()
{

    int choice;
    int value;
    int position;

    do
    {

        cout << "1. Insert at Start" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Position" << endl;

        cout << "4. Delete from Start" << endl;
        cout << "5. Delete from End" << endl;
        cout << "6. Delete from Position" << endl;

        cout << "7. Display Forward" << endl;
        cout << "8. Display Backward" << endl;

        cout << "9. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            
            case 1:

                cout << "Enter value: ";
                cin >> value;
                insertStart(value);

                break;

            case 2:

                cout << "Enter value: ";
                cin >> value;
                insertEnd(value);

                break;

            case 3:

                cout << "Enter value: ";
                cin >> value;

                cout << "Enter position: ";
                cin >> position;
                insertPosition(value, position);

                break;

            case 4:
                deleteStart();

                break;

            case 5:
                deleteEnd();
                break;
            case 6:

                cout << "Enter position: ";
                cin >> position;
                deletePosition(position);

                break;
            case 7:
                displayForward();

                break;
            case 8:
                displayBackward();
                break;
            case 9:

                cout << "Program ended" << endl;

                break;


           

            default:

                cout << "Invalid choice!" << endl;
        }

    
    } while (choice != 9);


    return 0;
}