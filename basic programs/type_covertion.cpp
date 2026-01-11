#include <iostream>


int main() {
    // Implicit type conversion
    int intValue = 42;
    double doubleValue = intValue; // int to double
    std::cout << "Implicit conversion from int to double: " << doubleValue << std::endl;

    // Explicit type conversion (casting)
    double anotherDoubleValue = 3.14;
    int anotherIntValue = static_cast<int>(anotherDoubleValue); // double to int
    std::cout << "Explicit conversion from double to int: " << anotherIntValue << std::endl;

    return 0;
}