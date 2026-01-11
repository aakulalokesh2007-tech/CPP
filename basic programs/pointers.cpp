#include <iostream>

int main(){
    int var = 20;   // actual variable declaration
    int *ptr;       // pointer variable declaration

    ptr = &var;     // store address of var in pointer variable

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    return 0;
}