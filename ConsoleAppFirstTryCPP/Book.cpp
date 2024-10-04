#include "Book.h"
#include <iostream>

using std::string;
using std::cout;

// Constructor
Book::Book(const string& name, const string& isbn, const string& author, int quantity)
    : name(name), isbn(isbn), author(author), quantity(quantity) {}

// Getters
string Book::getName() const { return name; }
string Book::getIsbn() const { return isbn; }
string Book::getAuthor() const { return author; }
int Book::getQuantity() const { return quantity; }

// Setters
void Book::setQuantity(int qty) { quantity = qty; }

// Rent a book
void Book::rentBook() {
    if (quantity > 0) {
        quantity--;
        cout << "You rented \"" << name << "\".\n";
    }
    else {
        cout << "Sorry, \"" << name << "\" is out of stock.\n";
    }
}

// Return a book
void Book::returnBook() {
    quantity++;
    cout << "You returned \"" << name << "\".\n";
}
