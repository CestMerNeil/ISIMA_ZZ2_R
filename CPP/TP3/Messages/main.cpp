#include "A.hpp"
#include "B.hpp"

int main(int, char **) {
    A a;
    B b;

    a.i = 1;
    b.j = 2;

    a.send(&b);
    b.send(&a);

    return 0;
}