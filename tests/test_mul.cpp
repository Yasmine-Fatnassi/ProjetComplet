#include "mul.h"
#include <cassert>

int main() {
    assert(mul(3, 5) == 15);
    assert(mul(-1, 1) == -1);
    assert(mul(-3, -4) == 12);
    return 0;
}
