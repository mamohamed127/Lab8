//include headers and libraries

#include "Library.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Library library;

    char command;
    string bookName;

    do {
        cout << "Enter command: ";
        cin >> command;

        switch (command) {
            case 'a':
                cin >> bookName;
                if (!library.addBook(bookName)) {
                    cout << "Cannot add the book." << endl;
                }
                break;

            case 'r':
                cin >> bookName;
                if (!library.removeBook(bookName)) {
                    cout << "Cannot remove the book." << endl;
                }
                break;

            case 'p':
                cout << "Library contents:" << endl;
                library.print();
                break;

            case 'q':
                cout << "Exiting" << endl;
                break;

            default:
                cout << "Invalid command." << endl;
        }

    } while (command != 'q');

    return 0;
}
