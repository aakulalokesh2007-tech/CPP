
#include <iostream>
using namespace std;
#include<iomanip>
int main() {
    double a;
    
    a=123.456789;
    cout<<std::setprecision(2); // Set precision to 3
    cout << a << endl; // Default precision
}




#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 1.23, y = 1122456.453;
    cout << std::fixed;
    cout << x << "\n"
         << y << "\n";
    cout << std::setprecision(2);
    cout << x << "\n"
         << y << "\n";
    double z = 1.2e+7;
    cout << z;
    return 0;
}