// main.cpp
#include <iostream>
#include "NameExtractor.hpp"

int main() {
    std::string fullName;
    
    std::cout << "Enter full name: ";
    std::getline(std::cin, fullName);

    // Extract first and last name
    auto names = extractFirstAndLastName(fullName);

    std::cout << "First name: " << names.first << std::endl;
    std::cout << "Last name: " << names.second << std::endl;

    return 0;
}
