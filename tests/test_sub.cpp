#include "sub.h"
#include <cassert>

int main() {
    assert(sub(7, 2) == 5);
    assert(sub(-1, 1) == -2);
    assert(sub(-3, -4) == 1);
    return 0;
}
