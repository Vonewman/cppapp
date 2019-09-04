#include "Cube.h"
using uiuc::Cube;

int main() {
    Cube *c1 = new Cube;
    Cube *c2 = c1;

    c2->setLength(10);

    delete c2; c2 = nullptr;
    delete c1; c1 = nullptr;

    return 0;
}
