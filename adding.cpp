// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: mohammed al-essawi
// Created on: June 2022
// This program calculates the sum of two numbers wiuth user input

#include <iostream>

int main() {
    // this function calculates sum of 2 numbers
    int number1;
    int number2;
    int sum;

    // input
    std::cout << "Enter your first number (integer): ";
    std::cin >> number1;
    std::cout << "Enter your second number (integer): ";
    std::cin >> number2;

    // process
    sum = number1 + number2;

    // output
    std::cout << "" << std::endl;
    std::cout << number1 << " + " << number2 << " = " << sum << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}