#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal to binary
string decimal_to_binary(int n) {
    string s = ""; // Initialize an empty string to store binary representation

    // Loop until the number becomes 0
    while (n > 0) {
        int t = n % 2;               // Calculate the remainder (0 or 1)
        s = s + to_string(t);        // Convert the remainder to string and append it
        n = n / 2;                   // Update the number by dividing it by 2
    }

    // Reverse the string to get the correct binary representation
    reverse(s.begin(), s.end());

    return s; // Return the binary string
}

int main() {
    int n;
    cin >> n; // Take input for the decimal number

    // Convert the decimal number to binary and store the result
    string ans = decimal_to_binary(n);

    // Print the binary representation
    cout << ans;

    return 0;
}