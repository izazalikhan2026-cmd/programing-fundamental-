#include <iostream>
using namespace std;

main(){
    float price =100.25;
    float* ptr= &price;
    cout<< &price << endl;
    cout<< &ptr << endl;
}