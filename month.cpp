// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 13 2022
// This program asks the user for a integer between 1-12
// the program then corresponds a month to that value

#include <iostream>

// declare userNum as a variable
int userMonth;

int main() {
    // get the number the user guessed
    std::cout << "Enter a integer between 1-12: ";
    std::cin >> userMonth;

    // Switch cases to correspond the userMonth to a month
    switch (userMonth) {
        case 1:
            std::cout << userMonth << " represents January\n";
            break;

        case 2:
            std::cout << userMonth << " represents February\n";
            break;

        case 3:
            std::cout << userMonth << " represents March\n";
            break;

        case 4:
            std::cout << userMonth << " represents April\n";
            break;

        case 5:
            std::cout << userMonth << " represents May\n";
            break;

        case 6:
            std::cout << userMonth << " represents June\n";
            break;

        case 7:
            std::cout << userMonth << " represents July\n";
            break;

        case 8:
            std::cout << userMonth << " represents August\n";
            break;

        case 9:
            std::cout << userMonth << " represents September\n";
            break;

        case 10:
            std::cout << userMonth << " represents October\n";
            break;

        case 11:
            std::cout << userMonth << " represents November\n";
            break;

        case 12:
            std::cout << userMonth << " represents December\n";
            break;

        // handle the error case
        default:
            std::cout << "Error." << userMonth
            << "  does not represent a month.\n";
    }
}
