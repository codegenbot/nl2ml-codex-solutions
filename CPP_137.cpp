#include <iostream>
#include <any>
#include <string>
#include <boost/any.hpp> // Include the header for boost::any_cast
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)) {
        // Comparison logic for integers
    } else if(a.type() == typeid(float) && b.type() == typeid(float)) {
        // Comparison logic for floats
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        // Comparison logic for strings
    } else if((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        // Convert and compare int and string
    }
    return std::any(); // Return an empty std::any object
}