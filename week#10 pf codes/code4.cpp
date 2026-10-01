#include <iostream>
using namespace std;
main(){
    int n=5;
    int a;
    int oddsum;
    while(a<=n){
        a++;
        if(a%2 !=0){
            cout<< a <<endl;
            oddsum +=a;
        }
    }
    cout<<" oddsum " <<oddsum <<endl;
}