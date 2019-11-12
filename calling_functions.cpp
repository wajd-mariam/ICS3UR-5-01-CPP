// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program calls different functions when it's called.

#include <iostream>

void FahrenheitConverter() {
    int celsius;
    float Fahrenheit;

    // input
    std::cout << "Enter degrees in C, it will give it back in F: ";
    std::cin >> celsius;

    // process
    Fahrenheit = (celsius * 1.8) + 32;

    // output
    std::cout << celsius << " C is " << Fahrenheit << " F ";
    std::cout << "" << std::endl;
    std::cout << "Thank you for using my program";
}

main() {
    // calling functions
    FahrenheitConverter();
}
