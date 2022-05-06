// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 5, 2022
// This program has a function called fahrenheit(). This function lets you
// enter a temperature in degrees Celsius (as a decimal), and converts and
// displays the temperature in Fahrenheit

#include <iostream>

void Fahrenheit() {
    // declare variables
    std::string tcString;
    float tc, tf;

    // get celsus as a string
    std::cout << "Enter a temperature in degrees Celsius: ";
    std::cin >> tcString;
    std::cout << "\n";

    try {
        // convert user input to a float
        tc = std::stof(tcString);

        // calculate the conversion
        tf = (9.0 / 5.0) * tc + 32;

        // display the output
        std::cout << tc << " degrees celsius is equal to "
<< tf << " degrees fahrenheit!\n";
    } catch  (std::invalid_argument) {
        std::cout << "Must be a number!";
}
}

int main() {
    // call fahrenheit
    Fahrenheit();
}
