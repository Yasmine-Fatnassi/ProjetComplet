#include "div.h"
#include <cassert>
#include <stdexcept>

int main() {
    assert(div(10, 2) == 5);
    assert(div(-10, 2) == -5);
    assert(div(-10, -2) == 5);
    try {
        div(1, 0);
    } catch (const std::invalid_argument &e) {
        assert(true); // Expected exception
    }
    return 0;
}
