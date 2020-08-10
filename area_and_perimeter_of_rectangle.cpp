// Copyright (C) 2020 Marcus A. Mosley All rights reserved
//
// Created by Marcus A. Mosley
// Created on August 2020
// This program calculates the area and perimeter of a rectangle
//   with user input

#include <iostream>

int main()  {
    // This function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // Input
    std::cout << "Enter length of rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of rectangle (mm): ";
    std::cin >> width;

    // Process
    area = length*width;
    perimeter = 2*(length+width);

    // Output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm^2" << std::endl;
    std::cout << "Perimeter is " << perimeter << "mm" << std::endl;
}
