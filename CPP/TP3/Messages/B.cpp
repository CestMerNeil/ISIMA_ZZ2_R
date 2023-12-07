#include "B.hpp"
#include "A.hpp"

void B::send(A* a) {
    a->exec(10);
}

void B::exec(int value) {
    j += value;
}
