/**
 * @file div.cpp
 * @brief Implementation of div function.
 */

#include "div.h"

int div(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("division by zero");
    }
    return a / b;
}
