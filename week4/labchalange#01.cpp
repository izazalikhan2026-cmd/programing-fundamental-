#include<iostream>
using namespace std ;
main(){
    float amount, discount,finalamount;
    cout<<"enter totle shoping amount:";
    cin>>amount;
    if(amount <= 5000){
        discount=amount*0.05;
    }
    else{
        discount= amount*0.10;
    }
    finalamount= amount - discount ;
    cout<<" Total amount:"<<amount;
    cout<<" discount:"<<discount;
    cout<<" amount to pay:"<<finalamount;
} 