// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program finds the squares of integers

#include <iostream>
#include <cmath>

main() {
    // This function finds the squares of integers
    std::string userInputAsString;
    int sqaures = 0;
    int userInput = 0;
    int loopCounter = 0;

    std::cout << "Find the squares!\n";

    // input
    std::cout << "Enter an integer: ";
    std::cin >> userInputAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        userInput = std::stoi(userInputAsString);
        if (userInput < 0) {
            for (loopCounter = 0; loopCounter > (userInput - 1) ; loopCounter--) {
                sqaures = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << sqaures << std::endl;
            }
        } else {
            for (loopCounter = 0; loopCounter < (userInput + 1) ; loopCounter++) {
            sqaures = pow(loopCounter, 2);
            std::cout << loopCounter << "² = " << sqaures << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl;
    }
}
