#include <iostream>

int main() {
    int x; // Declare an integer variable to hold user input
    // Generate a one-time password (OTP) using a simple algorithm
    srand(time(0)); // Seed the random number generator
    int otp = rand() % 1000000; // Generate a random number between 0 and 999999
    std::cout << "Your one-time password (OTP) is: " << otp << std::endl;
    getchar(); // Wait for user input before closing the console
    return 0;
    
}