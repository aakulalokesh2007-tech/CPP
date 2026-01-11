#include<iostream>

int main(){
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // Ternary operator to find the maximum of two numbers

    std::cout << "The maximum value is: " << max << std::endl;

    return 0; // Return 0 to indicate successful execution
}