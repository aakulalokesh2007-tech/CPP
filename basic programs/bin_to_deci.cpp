#include <bits/stdc++.h>
using namespace std;

void binary_to_decimal(string s) {
    int base = 1; // Represents the power of 2
    int ans = 0;  // Stores the final decimal value

    int size = s.length();

    // Traverse the binary string from the end
    for (int i = size - 1; i >= 0; i--) {
        ans += ((int)(s[i] - '0') * base); // Convert character to integer and multiply by base
        base = base * 2; // Update base (power of 2)
    }

    cout << ans; // Output the decimal value
}

int main() {
    string s;
    cin >> s; // Input the binary string
    binary_to_decimal(s); // Call the conversion function
    return 0;
}