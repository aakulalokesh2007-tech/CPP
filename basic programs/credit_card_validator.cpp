#include <iostream>


int main(){
    char num[16];
    int i,sum=0,sum2=0,sumf;
    std::cout<<"***********card validator************\n";
    std::cout<<"enter your card number";
    std::cin>> num;
    //std::cout<<num<<'\n';
    //std::cout<<sizeof(num);
   

    for (i=sizeof(num)-2;i>=0;i-=2){
        int temp;
        //std::cout<<(int)num[i]-'0'<<"sum:"<<sum<<" ";
        temp=(int)((num[i]-'0')*2);
        //std::cout<<"nu "<<num[i]<<" temp:"<<temp;
        if (temp>=10){
            int a,b;
            a=temp/10;
            b=temp%10;
            temp=a+b;
            //std::cout<<"a:"<<a<<"b:"<<b<<"Temp:"<<temp<<"\n";
            
        }
        //std::cout<<"temp:"<<temp<<"\n";
        sum+=temp;
        
    }

    // std::cout<<'\n'<<sum<<"\n";
    // std::cout<<'\n'<<sum2<<"\n";

    for (i=sizeof(num)-1;i>=0;i-=2){
        std::cout<<num[i]<<"\n";
        sum2+=(int)(num[i]-'0');}


    sumf=sum+sum2;
    if (sumf%10==0){
        std::cout<<"valid";
    }
    else{
         std::cout<<"not valid";
    }

} 
