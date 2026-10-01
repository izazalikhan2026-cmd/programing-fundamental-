#include<iostream>
using namespace std;

int dignolsum(int arr[][3],int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        
        for(int j=0; j<size; j++){
            if(j=i){
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int size = 3;
    cout<<dignolsum(arr,size);
}