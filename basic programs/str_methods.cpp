#include<iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Using getline to read a full line including spaces

    if (name.length()>12){
        std::cout << "Name is too long, please enter a name with 12 characters or less." << std::endl;
    } else {
        std::cout << "Hello, " << name << "!" << std::endl; // Output the name

        if (name.empty()) {
            std::cout << "You didn't enter a name!" << std::endl; // Check if the name is empty
        } else {
            std::cout << "Your name has " << name.length() << " characters." << std::endl; // Output the length of the name
        }

        name.clear(); // Clear the name string
        std::cout << "Name cleared. Length now: " << name.length() << std::endl; // Output the length after clearing

        name.append("@gmail.com"); // Append a domain to the name
        std::cout << "Email address: " << name << std::endl; // Output the modified name as an email address

        std::cout<<name.at(0) << std::endl; // Output the first character of the name

        name.insert(0, "@"); // Insert '@' at the beginning of the name

        std::cout<<name.find(' '); // Find the position of the first space in the name

        name.erase(0, 1); // Erase the first character of the name 

        //www.cplusplus.com/reference/string/string/
    }
}