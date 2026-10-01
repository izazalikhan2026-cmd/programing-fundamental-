#include <iostream>
using namespace std;
main(){
    int n=17;
    bool isprime = true;
    for(int i=1; i<=n-1 ;i++){
        if (n % i ==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"prime no" <<endl;

    }else{
        cout<<" non prime no" <<endl;
    }

} 