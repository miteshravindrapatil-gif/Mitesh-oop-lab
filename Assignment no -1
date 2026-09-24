#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
    int stockQuantity;

public:
    // Member function to record book details
    void recordDetails() {
        cout << "Enter Book Title: ";
        getline(cin >> ws, title);
        
        cout << "Enter Author Name: ";
        getline(cin, author);
        
        cout << "Enter Price: ";
        cin >> price;
        
        cout << "Enter Stock Quantity: ";
        cin >> stockQuantity;
    }

    // Member function to display book details
    void displayDetails() const {
        cout << "\n----------------------------\n";
        cout << "       BOOK DETAILS         \n";
        cout << "----------------------------\n";
        cout << "Title    : " << title << "\n";
        cout << "Author   : " << author << "\n";
        cout << "Price    : $" << price << "\n";
        cout << "Quantity : " << stockQuantity << "\n";
        cout << "----------------------------\n";
    }
};

int main() {
    Book book1;

    cout << "=== Digital Inventory System ===\n";
    
    // Recording information
    book1.recordDetails();

    // Displaying information
    book1.displayDetails();

    return 0;
}
