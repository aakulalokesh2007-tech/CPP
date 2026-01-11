
#include <iostream>

namespace firfst{
    int x=2;
}


namespace second{
    int x = 5;
}

int main(){
    // int x = 10;
    // std::cout<<x<<"\n";

    using firfst::x; // This will bring firfst::x into the current scope

    std::cout << x << std::endl;
    std::cout << second::x << std::endl;

    return 0;
}