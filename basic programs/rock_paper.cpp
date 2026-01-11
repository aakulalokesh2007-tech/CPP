#include <iostream>
#include <ctime>

char user(){
    char chose;
    std::cout<<"Rock\npaper\nscisors\nenter your choice ";
    std::cin>>chose;
    std::cout<<"you select ";
    return chose;
}

char com(){
    srand(time(0));
    int c = rand() % 3;
    
    switch (c) {
    case 0 :{
        return 'r';
        break;}
    case 1:{
        return 'p';break;
    }
    case 2:{
        return 's';break;
    }}return 0;}


void show(char a){
    switch (a)
    {
    case 'r':{
        std::cout<<"Rock\n";
        break;}
    case 'p':{std::cout<<"Paper\n";
        break;}
    case 's':{
        std::cout<<"Scissors\n";
        break;
    }
    }

}

int main(){
    bool x=true;
    char a;
    char u,c;
    while (x){
        std::cout<<"ROCK**PAPER**SCISSORS Game\n";
        u=user();
        show(u);
        std::cout<<"computer select ";
        c=com();
        show(c);
        if (u == c){
            std::cout<<"Draw\n";
        }
        else if ((u == 'r' && c == 's') || (u == 'p' && c == 'r') || (u == 's' && c == 'p')){
            std::cout<<"You win\n";
        }
        else{
            std::cout<<"Computer win\n";
        }
        std::cout<<"Do you want to play again? (y/n): ";
        char choice;
        std::cin>>choice;
        if (choice=='n' || choice=='N') {   
            x = false;
        }
}}