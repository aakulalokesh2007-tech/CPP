#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    auto a = 5;       // Type of 'a' is deduced as int
    auto b = 10.5;    // Type of 'b' is deduced as double

    cout << a << " " << b << "\n";               
    cout << typeid(a).name() << " " << typeid(b).name(); 
    return 0;
}