//
// Created by Karl zur Loye on 1/13/16.
//

#include "eecs230.h"

//even/odd determination;
int main() {
    cout << "Please enter an integer: \n";
    int num;
    cin >> num;
    int half = num / 2.0;
    double half_double = num / 2.0;
    if (half == half_double) {
        cout << "The integer is even";
    }
    else {
        cout << "The integer is odd";
    }
}