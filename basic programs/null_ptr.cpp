#include <iostream>

int main() {
    int *ptr = nullptr; // Initialize pointer to null

    if (ptr == nullptr) {
        std::cout << "Pointer is null." << std::endl;
    } else {
        std::cout << "Pointer is not null." << std::endl;
    }

    // Attempting to dereference a null pointer would cause undefined behavior
    // Uncommenting the next line would lead to a runtime error
    // std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    return 0;
}