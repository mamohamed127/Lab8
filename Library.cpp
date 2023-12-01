//include headers and libraries

//implement class functions
#include "Library.h"
#include <iostream>

Library::Library() {
    // constructor: initializes all book names to ""
    for (int i = 0; i < 10; ++i) {
        books[i] = "";
    }
}

bool Library::addBook(string bookName) {
    // Adds the given book to the library
    // Returns false if the book already exists or if the library already has 10 books

    for (int i = 0; i < 10; ++i) {
        if (books[i] == "") {
            // Found an empty slot, add the book
            books[i] = bookName;
            return true;
        } else if (books[i] == bookName) {
            // Book already exists
            return false;
        }
    }
    // Library is full
    return false;
}

bool Library::removeBook(string bookName) {
    // Removes the given book name from the library
    // Returns false if the library does not have the given book

    for (int i = 0; i < 10; ++i) {
        if (books[i] == bookName) {
            // Found the book, remove it
            books[i] = "";
            return true;
        }
    }
    // Book not found
    return false;
}

void Library::print() {
    // Prints the book names
    for (int i = 0; i < 10; ++i) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}