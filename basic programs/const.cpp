#include <iostream>
using namespace std;

int main() {
    const int x = 10; 
    x = x + 1;         // Compiler error: Cannot modify a const variable
    cout << x;
    return 0;
}