#include<iostream>
using namespace std;

int main()
{
    
    int x=10;
    int &y = x; // 'y' is a reference to 'x'
    cout<<y;
    cout<<*(&y);
    x += 5;           // Modify 'x'
    //cout << y << ' '; // Print value of 'y' (15, because it still refers to 'x')
    
    y += 5;           // Modify 'y'
    //cout << x << ' '; // Print value of 'x' (20, because 'y' modifies 'x')
    
    return 0;
}