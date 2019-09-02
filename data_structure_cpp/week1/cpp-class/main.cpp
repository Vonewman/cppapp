/**
 * C++ code for creating a Cube of length 2.4 units.
 * 
 * @author
 * Abdoulaye Diallo <vonewman7@gmail.com>
*/

#include <iostream>
#include "Cube.h"

int main() {
    Cube c;

    c.setLength(3.48);
    double volume = c.getVolume();
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}
