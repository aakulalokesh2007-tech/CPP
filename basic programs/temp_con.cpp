#include <iostream>

int main(){
    double tempCelsius, tempFahrenheit;
    char unit;
    std::cout << "Enter temperature in fahrenheit (f): or celsius (c): ";
    std::cin >> unit;

    if (unit == 'f' || unit == 'F') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> tempFahrenheit;
        tempCelsius = (tempFahrenheit - 32) * 5.0 / 9.0; // Convert Fahrenheit to Celsius
        std::cout << "Temperature in Celsius: " << tempCelsius << "°C" << std::endl;
    } else if (unit == 'c' || unit == 'C') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> tempCelsius;
        tempFahrenheit = (tempCelsius * 9.0 / 5.0) + 32; // Convert Celsius to Fahrenheit
        std::cout << "Temperature in Fahrenheit: " << tempFahrenheit << "°F" << std::endl;
    } else {
        std::cout << "Invalid unit! Please enter 'f' for Fahrenheit or 'c' for Celsius." << std::endl;
    }

    return 0; // Return 0 to indicate successful execution
    getchar(); // Wait for user input before closing the console window

}