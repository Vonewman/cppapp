#include <iostream>

int main() {
    int values[10] = { 2, 3, 5, 7, 11, 13, 15, 17, 21, 23};

    // Print the size of each type 'int':
    std::cout << sizeof(int) << std::endl;

    // Using pointer arithmetic, ask the computer to calculate
    // the offset from the begining of the array to [2]:
    int offset = (long)&(values[2]) - (long)&(values[0]);
    std::cout << offset << std::endl;

    return 0;

}
