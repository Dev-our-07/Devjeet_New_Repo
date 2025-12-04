/*8. Online Shopping Cart 
Concepts: Array of objects, composition, discount logic 
Problem: 
Define a class Product with attributes: id, name, price, discount. 
• Create an array of objects representing cart items. 
• Compute the total amount payable after applying discounts. 
• Display products sorted by final price (after discount). 
Hint: 
Use (price - (price * discount / 100)) for each product. 
Implement a function to compute the total bill. */
#include <iostream>
#include <string>
using namespace std;
class Product {
    int id;
    string name;
    double price;
    double discount; // in percentage
public:
    Product() {
        id = 0;
        name = "";
        price = 0.0;
        discount = 0.0;
    }

    void inputData() {
        cout << "Enter Product ID, Name, Price and Discount (%): ";
        cin >> id >> name >> price >> discount;
    }

    double finalPrice() {
        return price - (price * discount / 100);
    }

    void displayData() {
        cout << "Product ID: " << id << ", Name: " << name
             << ", Price: " << price << ", Discount: " << discount << "%"
             << ", Final Price: " << finalPrice() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products in cart: ";
    cin >> n;

    Product* cart = new Product[n];

    for (int i = 0; i < n; i++) {
        cart[i].inputData();
    }

    // Calculate total amount payable
    double totalAmount = 0.0;
    for (int i = 0; i < n; i++) {
        totalAmount += cart[i].finalPrice();
    }

    cout << "\nTotal Amount Payable after Discounts: " << totalAmount << endl;

    // Sort products by final price (ascending order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cart[j].finalPrice() > cart[j + 1].finalPrice()) {
                swap(cart[j], cart[j + 1]);
            }
        }
    }

    cout << "\nProducts sorted by Final Price:" << endl;
    for (int i = 0; i < n; i++) {
        cart[i].displayData();
    }

    delete[] cart; // Free allocated memory
    return 0;
}