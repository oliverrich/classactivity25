#include <iostream>
#include "utils/customer.h"
using namespace std;

int main() {
    Customer customer;


    cout << "Enter customer ID: ";
    cin >> customer.id;
    cin.ignore();


    //gathering info
    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer email: ";
    getline(cin, customer.email);

    // Gather address data
    cout << "Enter street address: ";
    getline(cin, customer.address.street);

    cout << "Enter city: ";
    getline(cin, customer.address.city);

    cout << "Enter zip code: ";
    getline(cin, customer.address.zipCode);

    //outputting with formatting
    cout << "\nCustomer Details:\n";
    cout << "ID: " << customer.id << endl;
    cout << "Name: " << customer.name << endl;
    cout << "Email: " << customer.email << endl;

    // Output address details
    cout << "Address:\n";
    cout << "  Street: " << customer.address.street << endl;
    cout << "  City: " << customer.address.city << endl;
    cout << "  Zip Code: " << customer.address.zipCode << endl;

    return 0;
}
