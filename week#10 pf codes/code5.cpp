#include <iostream>
using namespace std;
main(){
    int n=5;
    int a; 
    int evensum;

    while (a<=n){
        a++;
        if(a%2==0){
            cout<< a <<endl;
            evensum +=a;
        }
    }
    cout<<" evensum " <<evensum <<endl;
}