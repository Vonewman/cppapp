/**
 * Simple C++ making use of std::cout and a 'Cube' class.
 *
 * @author
 * Abdoulaye Diallo <vonewman7@gmail.com>
*/

#include <iostream>
#include "Cube.h"

int main() {
    uiuc::Cube c;
    c.setLength(2.4);
    std::cout << "Volume: " << c.getVolume() << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface Area: " << surfaceArea << std:endl;

    return 0;
}
