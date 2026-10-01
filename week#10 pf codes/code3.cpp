#include <iostream>
using namespace std;
main(){
   
    int n=5;
    int oddsum;
    for (int i=1; i<=n ; i++){
        if( i%2 != 0){
      cout<< i <<"  " << endl;
      oddsum +=i;
        }
    }
        
    cout<<" oddsum : " << oddsum <<endl;
    

}
    