/**
 * @author
 * Abdoulaye Diallo <vonewman7@gmail.com>
*/

#include "Cube.h"
using uiuc::Cube;

int main() {
    int *p = new int;
    Cube *c = new Cube;

    *p = 42;
    c->setLength(4);

    delete c; c = nullptr;
    delete p; p = nullptr;
    return 0;
}
