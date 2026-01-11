#include <iostream>
using namespace std;

int main() {
    string str = "gfg";

    // Traversing using indices
    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
    }
    cout << endl;

    // Traversing using range-based for loop
    for (char x : str) {
        cout << x;
    }
    cout << endl;

    // Traversing using iterators
    for (auto it = str.begin(); it != str.end(); ++it) {
        cout << *it;
    }
    cout << endl;

    return 0;
}