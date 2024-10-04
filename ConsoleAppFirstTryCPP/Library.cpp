#include "Library.h"
#include <iostream>

using std::string;
using std::cout;
using std::cin;

// Add a book to the library (pass by const reference to avoid copying)
void Library::addBook(const Book& book) {
    collection.push_back(book);
}

// Rent a book by ISBN (pass ISBN by const reference)
void Library::rentBook(const string& isbn) {
    for (Book& book : collection) {
        if (book.getIsbn() == isbn) {
            book.rentBook();
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " not found." << std::endl;
}

// Return a book by ISBN (pass ISBN by const reference)
void Library::returnBook(const string& isbn) {
    for (Book& book : collection) {
        if (book.getIsbn() == isbn) {
            book.returnBook();
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " not found." << std::endl;
}

// Display available books (const reference to each book for efficiency)
void Library::displayBooks() const {
    cout << "Available books in the library:" << std::endl;
    for (const Book& book : collection) {  // Use const Book& to avoid copying each book
        cout << "Name: " << book.getName()
            << ", ISBN: " << book.getIsbn()
            << ", Author: " << book.getAuthor()
            << ", Quantity: " << book.getQuantity() << std::endl;
    }
}

