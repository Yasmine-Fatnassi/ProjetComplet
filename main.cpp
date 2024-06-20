/**
 * @file main.cpp
 * @brief Main function demonstrating arithmetic operations and MyClass usage.
 */

#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "myclass.h"
#include <iostream>

int main() {
    std::cout << "Addition: " << add(3, 4) << std::endl;
    std::cout << "Subtraction: " << sub(7, 2) << std::endl;
    std::cout << "Multiplication: " << mul(3, 5) << std::endl;
    try {
        std::cout << "Division: " << div(10, 2) << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    MyClass obj(10);
    std::cout << "Value: " << obj.getValue() << std::endl;
    obj.setValue(20);
    std::cout << "New Value: " << obj.getValue() << std::endl;

    return 0;
}
