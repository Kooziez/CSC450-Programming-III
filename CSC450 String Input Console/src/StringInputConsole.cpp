/*
 * StringInputConsole.cpp
 *
 *  Created on: Feb 21, 2026
 *      Author: Cody Ihle
 */
#include <iostream>
#include <string>

int main()
{
    std::string firstString;

    std::string secondString;
    std::string combinedString;

    // Repeat 3 times
    for (int i = 1; i <= 3; i++)
    {
        std::cout << "Iteration " << i << std::endl;

        std::cout << "Enter first string: ";
        std::getline(std::cin, firstString);

        std::cout << "Enter second string: ";
        std::getline(std::cin, secondString);

        // Concatenate the two strings
        combinedString = firstString + secondString;

        // Display the result
        std::cout << "Concatenated result: " << combinedString << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    return 0;
}



