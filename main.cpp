/*
 * Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/30/2025
 * Purpose: Main program for Module 5 Part A lab activity. Prompts user for drink details and displays them using the Drink class.
 */

#include "drink.h"
#include <iostream>
#include <string>

int main() {
    Drink drink;
    std::string size, temp, base, flavor;

    std::cout << "Enter drink size (small/medium/large): ";
    std::cin >> size;
    drink.setSize(size);

    std::cout << "Enter temperature (hot/cold): ";
    std::cin >> temp;
    drink.setTemperature(temp);

    std::cout << "Enter base (coffee/tea): ";
    std::cin >> base;
    drink.setBase(base);

    std::cout << "Enter flavors (type 'done' to finish): ";
    while (true) {
        std::cin >> flavor;
        if (flavor == "done") break;
        drink.addFlavor(flavor);
    }

    drink.display();
    return 0;
}
