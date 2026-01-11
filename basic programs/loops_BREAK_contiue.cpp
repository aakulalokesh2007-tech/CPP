#include <iostream>

//while loop example
// This program demonstrates a simple while loop that prints the value of i from 0 to 4.
// int main() {
//     int i = 0;
//     while (i < 5) {
//         std::cout << "Current value of i: " << i << std::endl;
//         i++;
//     }
//     return 0;
// }



// do-while loop example
// This program demonstrates a do-while loop that prints the value of i from 0 to 4.    
// int main() {
//     int i = 0;   
//     do {
//         std::cout << "Current value of i: " << i << std::endl;
//         i++;
//     } while (i < 5);
//     return 0;
// }



// for loop example
// This program demonstrates a for loop that prints the value of i from 0 to 4. 

// int main() {
//     for (int i = 0; i < 5; i++) {
//         std::cout << "Current value of i: " << i << std::endl;
//     }
//     return 0;
// }

// This program demonstrates a for loop that prints the value of i from 0 to 4.
// The loop initializes i to 0, checks if i is less than 5, and increments i by 1 in each iteration.  



//BREAK and CONTINUE statements in loops
// This program demonstrates the use of break and continue statements in a for loop.
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            std::cout << "Breaking the loop at i = " << i << std::endl;
            break; // Exit the loop when i is 5
        }
        if (i % 2 == 0) {
            std::cout << "Skipping even number: " << i << std::endl;
            continue; // Skip the rest of the loop for even numbers
        }
        std::cout << "Current value of i: " << i << std::endl;
    }
    return 0;
}