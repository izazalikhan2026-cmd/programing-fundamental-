#include <iostream>
using namespace std;
main(){ 
int charge;
int time;
float current;

cout<<"enter charge:"<<endl;
cin>>charge;
cout<<"enter time:"<<endl;
cin>>time;

current=charge/time;
cout<<"the current is :"<<current<<"ampere"<<endl;
}