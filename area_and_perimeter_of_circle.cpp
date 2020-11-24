// copyright (c) 2020 Mother Teresa HS All Rights Reserved
//
// Created by: Dahrio Francois
// Created on: November 2020
// This program calculates the area and perimeter of a circle
//     With radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm^2" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "mm" << std::endl;
}
