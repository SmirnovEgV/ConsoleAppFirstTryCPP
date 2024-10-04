#pragma once

#include <string>

using std::string;

class Book {
private:
    string name;
    string isbn;
    string author;
    int quantity;

public:
    // Constructor (pass strings by const reference for efficiency)
    Book(const string& name, const string& isbn, const string& author, int quantity);

    // Getters
    string getName() const;
    string getIsbn() const;
    string getAuthor() const;
    int getQuantity() const;

    // Setters
    void setQuantity(int quantity);

    // Functions
    void rentBook();
    void returnBook();
};
