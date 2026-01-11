#include <iostream>

int main(){
    std::string students[]={"vijay","ajith","allu arjun"};

    for (std::string student: students) {
        std::cout << student << std::endl;
    }
}