#ifndef DIV_H
#define DIV_H

#include <stdexcept>

/**
 * @file div.h
 * @brief Divides the first integer by the second.
 *
 * @param a First integer.
 * @param b Second integer.
 * @return Quotient of a and b.
 * @throws std::invalid_argument if b is zero.
 */
int div(int a, int b);

#endif // DIV_H
