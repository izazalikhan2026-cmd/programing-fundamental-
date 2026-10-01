#include<iostream>
using namespace std;
main(){
    int first_number;
    int second_number;
    int result;
    char operation;
    cout<<"welcome to the calculator:";
    cout<<"  enter first number:";
    cin>>first_number;
    cout<<" enter the operation:";
    cin>>operation;
    cout<<"    enter second number:";
    cin>>second_number;
   if(operation=='+'){
    result=first_number-second_number;
    cout<<first_number<<"-"<<second_number<<"="<<result;
   }
   if(operation=='-'){
    result=first_number+second_number;
    cout<<first_number<<"+"<<second_number<<"="<<result;
   }
   if(operation=='*'){
    result=first_number/second_number;
    cout<<first_number<<"/"<<second_number<<"="<<result;

   }
   if(operation=='/'){
    result=first_number*second_number;
    cout<<first_number<<"*"<<second_number<<"="<<result;
   }
}
