#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    float price;
    int quantity;

public:
    // Function to set details for the item
    void setDetails(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }
 
    // Function to calculate total cost for this item
    float getTotalCost() {
        return price * quantity;
    }

    // Function to display item details
    void display() {
        cout << "Item: " << name << "\n";
        cout << "Price per item: $" << price << "\n";
        cout << "Quantity: " << quantity << "\n";
        cout << "Total cost: $" << getTotalCost() << "\n";
    }
};

int main() {
    int MAX_ITEMS = 5;
    Item items[MAX_ITEMS];

    // Get details for each item
    for (int i = 0; i < MAX_ITEMS; ++i) {
        string name;
        float price;
        int quantity;

        cout << "Enter name of item " << i+1 << ": ";
        getline(cin, name);
        cout << "Enter price per item: ";
        cin >> price;
        cout << "Enter quantity purchased: ";
        cin >> quantity;
        cin.ignore(); // Clear input buffer

        items[i].setDetails(name, price, quantity);
    }

    // Display details and calculate total amount to be paid
    float totalAmount = 0;
    cout << "\n\n===== Receipt =====\n";
    for (int i = 0; i < MAX_ITEMS; ++i) {
        cout << "Item " << i+1 << ":\n";
        items[i].display();
        totalAmount += items[i].getTotalCost();
        cout << "------------------------\n";
    }

    cout << "Total amount to be paid: $" << totalAmount << "\n";

    return 0;
}
