/*. Inventory Stock Update 
Concepts: Array of objects, operator overloading 
Problem: 
Define a class Item with members: code, name, and quantity. 
• Overload the + operator to add quantities of items with the same code. 
• Create an array of items. 
• Merge stock from two inventories (two arrays of objects) into a third array. 
Hint: 
Use operator overloading with an array-based merging logic.*/
#include <iostream>
#include <string>
using namespace std;

class Item{
    public:
    int code;
    string name;
    int quantity;


    Item() {
        code = 0;
        name = "";
        quantity = 0;
    }

    void inputData() {
        cout << "Enter Item Code, Name and Quantity: ";
        cin >> code >> name >> quantity;
    }

    Item operator+(const Item& other) 
    {
        Item result;
        if (code == other.code) {
            result.code = code;
            result.name = name;
            result.quantity = quantity + other.quantity;
        } 
        
        else {
            result = *this; // If codes don't match, return the original item
        }
        return result;
    }
};

int main()
{
    int n;
    cout << "Enter number of items in each inventory: ";
    cin >> n;

    Item* inventory1 = new Item[n];
    Item* inventory2 = new Item[n];
    Item* mergedInventory = new Item[n];

    cout << "Enter details for Inventory 1:" << endl;
    for (int i = 0; i < n; ++i) {
        inventory1[i].inputData();
    }

    cout << "Enter details for Inventory 2:" << endl;
    for (int i = 0; i < n; ++i) {
        inventory2[i].inputData();
    }

    // Merging inventories
    for (int i = 0; i < n; ++i) {
        mergedInventory[i] = inventory1[i] + inventory2[i];
    }

    cout << "Merged Inventory:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Item Code: " << mergedInventory[i].code << ", Name: " << mergedInventory[i].name << ", Quantity: " << mergedInventory[i].quantity << endl;
    }

    delete[] inventory1;
    delete[] inventory2;
    delete[] mergedInventory;

    return 0;
}