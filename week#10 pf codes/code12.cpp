#include <iostream>
using namespace std ;
main(){
    int nums []={1,2,-3,4,-5};
    int size =5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size ; i++){
        smallest = min(nums[i], smallest) ;
        largest  = max(nums[i], largest) ; 
        }
     
    cout<<"smallest =" << smallest <<endl;
    cout<<"largest = " << largest <<endl;
}