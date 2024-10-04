#pragma once

#include "Book.h"
#include <vector>

using std::string;
using std::vector;

class Library {
private:
    vector<Book> collection;

public:
    // Add a book to the library (pass by const reference to avoid copying)
    void addBook(const Book& book);

    // Rent a book by ISBN (pass ISBN by const reference)
    void rentBook(const string& isbn);

    // Return a book by ISBN (pass ISBN by const reference)
    void returnBook(const string& isbn);

    // Display available books (const function to indicate no modification)
    void displayBooks() const;
};
