// Copyright (c) 2021 Matthew Meech All rights reserved.
// Created by: Matthew Meech
// Created on: Sep 2021
// This program is a random number guessing game

#include <iostream>
#include <random>

int main() {
    int number;
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0 , 9);
    someRandomNumber = idist(rgen);
    std::cout << someRandomNumber << std::endl;


    // input
    std::cout << "Enter the number 0-9: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // if ... then ...
if (number == someRandomNumber) {
    std::cout << "you are right!"
;} else {
    std::cout << "you are wrong!"
;}
}
