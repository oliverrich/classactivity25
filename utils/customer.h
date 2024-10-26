//
// Created by Oliver on 10/25/2024.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H


#include <string>
using namespace std;
struct Address {
    string street;
    string city;
    string zipCode;
};

struct Customer {
    int id;
    string name;
    string email;
    Address address;
};

#endif // CUSTOMER_H

