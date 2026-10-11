#include <iostream>
#include <string>
using namespace std;

class Book{
public:
    string title;
    string author;
    float price;

    void getData(){
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display(){
        cout << "\nBook Details" << endl;
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
    }
};

int main(){
    Book *b = new Book; //using dinamic memory allocation

    b->getData();
    b->display();

    delete b;

    return 0;
}