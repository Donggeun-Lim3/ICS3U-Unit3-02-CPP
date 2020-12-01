// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program is number guessing game

#include <iostream>

int main() {
    // this function checks if number is not 5
    const int MY_NUMBER = 5;
    int yournumber;

    // input
    std::cout << "Enter the number : ";
    std::cin >> yournumber;
    std::cout << "" << std::endl;

    // process
    if (yournumber > MY_NUMBER) {
        // output
        std::cout << "You are wrong";
    }
}
