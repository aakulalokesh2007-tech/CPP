#include <iostream>
int main(){
    const double pi = 3.14159; // constant for pi
    const double e = 2.71828; // constant for Euler's number

    //pi=10.111 // This line would cause an error because pi is a constant
    std::cout << "Value of pi: " << pi << std::endl;

    return 0;
}