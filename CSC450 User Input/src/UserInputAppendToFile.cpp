/*
 * UserInputAppendToFile.cpp
 *
 *  Created on: Mar 15, 2026
 *      Author: Cody Ihle
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function that reads the original file, reverses all characters,
// and writes the reversed content to a new file
void reverseFile() {

    // Open the original file for reading
    ifstream inputFile("CSC450_CT5_mod5.txt");

    if (!inputFile.is_open()) {
        cout << "Could not open input file." << endl;
        return;
    }

    string content = "";
    string line;

    // Read each line from the file and store it in one string
    while (getline(inputFile, line)) {
        content += line + "\n";
    }

    inputFile.close(); // Close input file

    // Reverse all characters in the string
    reverse(content.begin(), content.end());

    // Create/open the reverse output file
    ofstream outputFile("CSC450-mod5-reverse.txt");

    if (!outputFile.is_open()) {
        cout << "Could not create reverse file." << endl;
        return;
    }

    // Write reversed content to the new file
    outputFile << content;
    outputFile.close();

    cout << "Reverse file successfully created/updated." << endl;
    cout << "Check the project folder for the new Reverse File." << endl;
}

int main() {

    string userInput;

    // Ask user to enter text
    cout << "Enter text to append to the file: ";
    getline(cin, userInput);

    // Open file in append mode so existing data is not erased
    ofstream file("CSC450_CT5_mod5.txt", ios::app);

    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Write user input to the file
    file << userInput << endl;
    file.close();

    cout << "Text appended to CSC450_CT5_mod5.txt" << endl;

    // Call function to reverse the file contents
    reverseFile();

    return 0;
}
