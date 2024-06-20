#include "add.h"
#include <cassert>

int main() {
    assert(add(3, 4) == 7);
    assert(add(-1, 1) == 0);
    assert(add(-3, -4) == -7);
    return 0;
}
