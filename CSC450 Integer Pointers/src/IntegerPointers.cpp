/*
 * IntegerPointers.cpp
 *
 *  Created on: Mar 1, 2026
 *      Author: Cody Ihle
 */
#include <iostream>
using namespace std;

int main()
{
    //Creation of the int variables
    int num1, num2, num3;

    //Ask users for 3 integers
    cout << "\nPlease enter 3 integers:" << endl;
    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter third integer: ";
    cin >> num3;

    // Create integer pointers with dynamic memory
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Store the values into dynamic memory
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display variable contents
    cout << "\nStoring your integers in variables:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    // Display pointer contents
    cout << "\nStoring your integers in dynamic memory (via pointers):" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    // Free dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Set pointers to nullptr
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}



