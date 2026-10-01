#include <iostream> 
using namespace std;
 int secondlargest;
 int size;
 int findsecondlargest(int arry[],int size){
    int largest = arry[0];
    int secondlargest= arry[0];
    for(int i=0; i<size; i++){
        if(arry[i] > largest){
            largest= arry[i];
        }
    }
    for(int i=0; i<size; i++){
        if(arry[i] > secondlargest &&  arry[i] < largest){
            secondlargest= arry[i];

        }
    }
    return = secondlargest;
    
 }
 int main(){
    int arry[]={4,5,6,7,9,8};
    int size=6;
    int value= findsecondlargest(arry,size);
    cout<<"value ="  <<value <<endl;

 }