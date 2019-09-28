// Copyright (c) 2019 Izza Khalid All rights reserved
//
// Created by: Izza Khalid
// Created on: September 2019
// This program adds two integers together

#include <iostream>

int main() {
    // this function adds two integers together

    int firstnumber;
    int secondnumber;

    // input
    std::cout << "Lets find the total of two integers" << std::endl;
    std::cout << ("") << std::endl;
    std::cout << "Enter the first number:";
    std::cin >> firstnumber;
    std::cout << "Enter the second number:";
    std::cin >> secondnumber;

    // process
    int total = firstnumber + secondnumber;

    // output
    std::cout << firstnumber << " + " <<  secondnumber << " = " << total
              << std::endl;
}
