#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string foodName;                                  //initialize variables
    char itemCode;
    int quantity;
    double unitPrice;
    bool member;

    cout << "Enter a food: ";                       // Gets Food input
    getline(cin,foodName);

    cout << "Enter an item code(single digit): ";  // Gets Item code input
    cin >> itemCode;

    cout << "Enter the amount of items: ";        // Gets Amount of items
    cin >> quantity;

    cout << "Enter the unit price ($): ";        // Gets unit price
    cin >> unitPrice;

    cout << "Are you a member(y/n)? ";          // Asks if you're a member
    cin >> member;

    double subTotal = quantity * unitPrice;  //subtotal

    cout << fixed << setprecision(2);
    cout << setw(28) << "Walmart Receipt" << endl;              // Receipt

    cout << left <<setw(20) << "Item Name"
         << left <<setw(8) << "Code"
         << right << setw(6) << "Qty"
         << right << setw(10) << "Price" << endl;
    
    cout << left <<setw(20) << foodName
         << left <<setw(8) << itemCode
         << right << setw(6) << quantity
         << right << setw(10) << unitPrice << "\n" << endl;

    cout << left << setw(25) << "Subtotal:"
         << right << setw(15) << subTotal << endl;






}
