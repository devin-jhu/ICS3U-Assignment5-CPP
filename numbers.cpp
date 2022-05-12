// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop string

#include <iostream>
#include <string>


int main() {
    // this program shows the string of number entered
    std::string intNumber;
    int number;
    int counter = 1;
    std::string string;

    // input
    std::cout << "enter number: ";
    std::cin >> intNumber;
    std::cout << "enter string: ";
    std::cin >> string;

    // process & output
    try {
        number = std::stoi(intNumber);
          if (number <= 0) {
            std::cout << "not a positive number" << std::endl;
        } else {
            for (int counter = 1; counter < number + 1; counter++) {
                std::cout << string;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "not a number" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
