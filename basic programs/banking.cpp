#include <iostream>


double amount;
double bal(){
    return amount;
     }
    

void depo(){
    double temp;
    std::cout<<"enter your deposit amount";
    std::cin>>temp;
    amount+=temp;
    std::cout<<"amount deposited succesfully";   }

void draw(){
    double temp;
    std::cout<<"amount to withdraw";
    std::cin>>temp;
    if (amount<temp){
        std::cout<<"insufficient balence unable to withdraw";    }

    else{
        amount-=temp;
        std::cout<<"withdraw succesfully";  }   
     }


int main(){
    bool x=true;
    while (x){
        int a;
        std::cout<<"*****************\nEnter your choice\n*****************\n";
        std::cout<<"1. Show Balance\n2. Deposit\n3. Withdraw\n4.Exit\nEnter your choice";
        std::cin>>a;
        switch(a){
            case 1:{std::cout<<"\nyour balence is "<<bal()<<'\n' ;break; }
            case 2:{depo(); std::cout<<'\n';break;}
            case 3:{draw(); std::cout<<'\n';break;}
            case 4:{x=false;break;}
        }
    }
}