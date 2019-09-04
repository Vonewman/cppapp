/**
 * Simple C++ class for representing a Cube.
 *
 * @author
 * Abdoulaye Diallo <vonewman7@gmail.com>
*/

#pragma once

namespace uiuc {
    class Cube {
    public:
	double getVolume();
	double getSurfaceArea();
	void setLength(double length);

    private:
	double length_;
    };
}
