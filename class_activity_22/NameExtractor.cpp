// name_extractor.cpp
#include "NameExtractor.hpp"
#include <sstream>

std::pair<std::string, std::string> extractFirstAndLastName(const std::string& fullName) {
    std::stringstream ss(fullName);
    std::string firstName, lastName, word;

    // Read the first word (first name)
    ss >> firstName;

    // Read the remaining words; the last word will be the last name
    while (ss >> word) {
        lastName = word;
    }

    // Return the first and last name
    return {firstName, lastName};
}
