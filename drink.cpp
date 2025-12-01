/*
 * Program name: drink.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/30/2025
 * Purpose: Implements Drink class methods for setting attributes and displaying drink details.
 */

#include "drink.h"
#include <iostream>

void Drink::setSize(const std::string& s) {
    if (s == "small" || s == "medium" || s == "large") {
        size = s;
    } else {
        std::cout << "Invalid size entered.\n";
    }
}

void Drink::setTemperature(const std::string& t) {
    if (t == "hot" || t == "cold") {
        temperature = t;
    } else {
        std::cout << "Invalid temperature entered.\n";
    }
}

void Drink::setBase(const std::string& b) {
    if (b == "coffee" || b == "tea") {
        base = b;
    } else {
        std::cout << "Invalid base entered.\n";
    }
}

void Drink::addFlavor(const std::string& f) {
    flavors.push_back(f);
}

void Drink::display() const {
    std::cout << "\nDrink Details:\n";
    std::cout << "Size: " << size << "\n";
    std::cout << "Temperature: " << temperature << "\n";
    std::cout << "Base: " << base << "\n";
    std::cout << "Flavors: ";
    for (const auto& flavor : flavors) {
        std::cout << flavor << " ";
    }
    std::cout << "\n";
}
