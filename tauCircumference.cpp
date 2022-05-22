// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>

int main() {
    // I display the values of rgb
    // output
    for (int counter1 = 0; counter1 <= 256; counter1++) {
        for (int counter2 = 0; counter2 <= 256; counter2++) {
            for (int counter3 = 0; counter3 <= 256; counter3++) {
                std::cout << "RGB(" << counter1 << ", " << counter2 << ", ";
                std::cout << counter3 << ")" << std::endl;
            }
        }
    }
}
