#include<iostream>
using namespace std;
main(){
    float amount, discount,finalamount;
    cout<<"enter total shoping amount:";
    cin>>amount;
    if(amount>=10000){
        discount=amount* 0.70;
    }
    else{
        discount=amount*0.50;
    }
    finalamount= amount-discount;
    
    cout<<"total amount:"<<amount;
    cout<<"  discont:"<<discount;
    cout<<"  amount to pay:"<<finalamount;
}