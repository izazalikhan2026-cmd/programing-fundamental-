#include <iostream>
using namespace std;
main(){
    int nums[]={1,4,-5,6,-9};
    int size=5;
    int smallest= INT_MAX;
    for(int i=0; i<size; i++){
        if(nums [i] <smallest){
           smallest = nums[i];
        }
    
    }
    cout<<"smallest ="  <<smallest  <<endl;
}
    
    