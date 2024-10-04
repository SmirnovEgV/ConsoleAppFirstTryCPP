#include "Library.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::getline;

int main() {
    Library library;

    // Adding some books to the library
    library.addBook(Book("The Great Gatsby", "1234567890", "F. Scott Fitzgerald", 3));
    library.addBook(Book("1984", "0987654321", "George Orwell", 2));

    int choice;
    string isbn;

    while (true) {

        cout << "\nLibrary Menu:\n";
        cout << "1. Display Books\n";
        cout << "2. Add Book\n";
        cout << "3. Rent Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                cout << "\n";
                library.displayBooks();
                break;

            case 2:
            {
                string name, author;
                int quantity;
                cout << "Enter book name: ";
                getline(cin, name);
                cout << "Enter ISBN: ";
                getline(cin, isbn);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter quantity: ";
                cin >> quantity;
                library.addBook(Book(name, isbn, author, quantity));
                break;
            }

            case 3:
                cout << "\nList of available books\n";
                library.displayBooks();
                cout << "\n";
                cout << "Enter ISBN of the book to rent: ";
                getline(cin, isbn);
                library.rentBook(isbn);
                break;

            case 4:
                cout << "\nList of available books\n";
                library.displayBooks();
                cout << "\n";
                cout << "Enter ISBN of the book to return: ";
                getline(cin, isbn);
                library.returnBook(isbn);
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
        
    }

    return 0;
}