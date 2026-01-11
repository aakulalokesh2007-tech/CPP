#include <iostream>
#include<cmath> // for sqrt function

int main() {
    double a ; // length of one side
    double b ; // length of the other side
    double c; // length of the hypotenuse


    std::cout << "Enter the length of the first side: ";
    std::cin >> a;
    std::cout << "Enter the length of the second side: ";
    std::cin >> b;
    // Calculate the hypotenuse using the Pythagorean theorem
    c = sqrt(pow(a,2) + b * b);//c=a^2 + b^2;

    std::cout << "The length of the hypotenuse is: " << c << std::endl;

    getchar(); // Wait for user input before closing the console window
    return 0;
}