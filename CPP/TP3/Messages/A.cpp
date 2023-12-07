#include "A.hpp"
#include "B.hpp"

void A::exec(int value) {
    i += value;
}
void A::send(B* b) {
    b->exec(5);
}