#include<iostream>
using namespace std;
main(){
    float amount,discount,finalamount;
    cout<<" Enter total shoping amount:";
    cin>>amount;
    if(amount<= 2500){
        discount= amount* 0.025;
    }
    else{
        discount= amount*0.010;

    }
    finalamount= amount-discount;
    cout<<"total amount: "<< amount;
    cout<<"  discount:"  <<discount;
    cout<<"  amount to pay: "<< finalamount;

}