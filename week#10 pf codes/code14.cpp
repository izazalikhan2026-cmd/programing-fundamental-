#include <iostream>
using namespace std ;
int arry[]={1,4,3,5,6,8};
int size=6;
int thirdlargest;;
int findthirdlargest(int arry[],int size){
    int largest=arry[0];
    int secondlargest=arry[0];
    int thirdlargest=arry[0];

for (int i=0; i<size; i++){
    if (arry[i] > largest){
        largest = arry[i];
    }
}
    for (int i=0;i<size ;i++){
        if(arry[i] > secondlargest && arry[i] < largest){
         secondlargest = arry[i]; 
        }
    }
    for (int i=0; i<size; i++){
        if(arry[i] > thirdlargest  && arry[i] < secondlargest && arry[i] < largest){
            thirdlargest= arry[i];

        }
    }


 return thirdlargest; 
 
}
int main(){
   
   
    int value=findthirdlargest(arry,size);
    cout<<" value ="  <<value << endl;
}