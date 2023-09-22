// Copyright (c) 2023 Remy Skelton All right reserved
// .
// Created by: Remy Skelton
// Date: Sep 21 2023
// This program displays the area of a rectangle.

#include <iostream>

int main() {
    std::cout << "For a rectangle with length of 12cm and a width of 5cm:"
     << std::endl;
    std::cout << std::endl;
    std::cout << "the area is: " << (12 * 5)
              << "cm^2" << std::endl;
    std::cout << "the perimeter is: " << (2 * (12 + 5))
              << "cm" << std::endl;

    return 0;
}

