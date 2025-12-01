/*
 * Program name: drink.h
 * Author: Sahar Musleh
 * Date last updated: 11/30/2025
 * Purpose: Declares attributes and methods for handling drink details such as size, temperature, base, and flavors.
 */

#ifndef DRINK_H
#define DRINK_H

#include <string>
#include <vector>

class Drink {
private:
    std::string size;
    std::string temperature;
    std::string base;
    std::vector<std::string> flavors;

public:
    void setSize(const std::string& s);
    void setTemperature(const std::string& t);
    void setBase(const std::string& b);
    void addFlavor(const std::string& f);
    void display() const;
};

#endif
