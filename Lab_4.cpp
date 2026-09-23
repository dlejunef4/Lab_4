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
    char memberInput;
    bool isMember = false;
    string cashierNotes;

    cout << "Enter a food: ";                       // Gets Food input
    getline(cin,foodName);

    cout << "Enter an item code(single character): ";  // Gets Item code input
    cin >> itemCode;

    cout << "Enter the amount of items: ";        // Gets Amount of items
    cin >> quantity;

    cout << "Enter the unit price ($): ";        // Gets unit price
    cin >> unitPrice;

    cout << "Are you a member(y/n)? ";          // Asks if you're a member
    cin >> memberInput;


    cout << "Enter cashier notes: ";
    cin.ignore();
    getline(cin, cashierNotes);


    if (memberInput == 'y' || memberInput == 'Y') { // Checks if user is a member
        isMember = true; 
    }

    double subTotal = quantity * unitPrice;  //subtotal
    double discount = isMember ? (subTotal * 0.10) : 0.0;
    double total = subTotal - discount;


    cout << "\n\n";
    cout << "========================================" << endl;
    cout << "            PURCHASE RECEIPT            " << endl;
    cout << "========================================" << endl;


    cout << fixed << setprecision(2);             // Receipt

    cout << left <<setw(20) << "Item Name"
         << left <<setw(8) << "Code"
         << right << setw(6) << "Qty"
         << right << setw(10) << "Price" << endl;
    
    cout << left <<setw(20) << foodName
         << left <<setw(8) << itemCode
         << right << setw(6) << quantity
         << right << setw(10) << unitPrice << "\n" << endl;
   cout << "========================================" << endl;

    cout << left << setw(25) << "Subtotal:"
         << right << setw(15) << subTotal << endl;

    if (isMember) {
     cout << left << setw(25) << "Discount Amount:"
          << right << setw(11) << "-$" << discount << endl;
    }
     
    cout << left << setw(25) << "Total Due:"
          << right << setw(11) << "$" << total << endl;

    cout << left << setw(25) << "Cashier Notes:"
          << right << setw(11) << cashierNotes << endl;




}
