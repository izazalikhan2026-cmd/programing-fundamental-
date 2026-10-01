#include <iostream>
using namespace std;
main(){
    int evensum;
    int n=10;
    for(int i=1; i<=n; i++){
         if(i%2==0){
            cout<< i <<endl;
            evensum +=i;

         } 
    } 
    cout<<" evensum ="  <<evensum <<endl;
}