#include <iostream>
 
int main(){
    const int SIZE =100;
    int i = 0;
    std::string foods[SIZE];

    fill(foods,foods+SIZE, "Pizza");

    for(auto food:foods){
        std::cout <<i<<':'<< food << std::endl;
        i++;
    }

    return 0;
}