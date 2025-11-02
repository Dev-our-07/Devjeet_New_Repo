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

class Item {
    int code;
    string name;
    int quantity;

    public:
    Item()      //default constructor
    {
        code = 0;
        name = "";
        quantity = 0;
    }

    Item(int c, string n, int q)   //parameterized constructor
    {
        code = c;
        name = n;
        quantity = q;
    }

    
    Item operator+(const Item& obj) 
    {
        if (code == obj.code) {
            return Item(code, name, quantity + obj.quantity);
        } 
        else {
            return Item(); // Return a default item if codes don't match
        }
    }
};

int main()
{
    int n1, n2;
    cout << "Enter number of items in first inventory: ";
    cin >> n1;

    Item inv1[n1];   //array of objects for first inventory

    for (int i = 0; i < n1; i++) {
        int c, q;
        string n;
        cout << "Enter Item Code, Name and Quantity: ";
        cin >> c >> n >> q;
        inv1[i] = Item(c, n, q);
    }

    cout << "Enter number of items in second inventory: ";
    cin >> n2;

    Item inv2[n2];   //array of objects for second inventory

    for (int i = 0; i < n2; i++) {
        int c, q;
        string n;
        cout << "Enter Item Code, Name and Quantity: ";
        cin >> c >> n >> q;
        inv2[i] = Item(c, n, q);
    }

    Item mergedInv[n1 + n2]; // Array to hold merged inventory
    int k = 0;

    // Merging logic
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (inv1[i].code == inv2[j].code) {
                mergedInv[k++] = inv1[i] + inv2[j];
                found = true;
                break;
            }
        }
        if (!found) {
            mergedInv[k++] = inv1[i];
        }
    }

    for (int j = 0; j < n2; j++) {
        bool found = false;
        for (int i = 0; i < n1; i++) {
            if (inv2[j].code == inv1[i].code) {
                found = true;
                break;
            }
        }
        if (!found) {
            mergedInv[k++] = inv2[j];
        }
    }

    cout << "Merged Inventory:" << endl;
    for (int i = 0; i < k; i++) {
        cout << "Item Code: " << mergedInv[i].code 
             << ", Name: " << mergedInv[i].name 
             << ", Quantity: " << mergedInv[i].quantity << endl;
    }

    return 0;
}