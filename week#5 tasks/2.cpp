#include<iostream>
using namespace std;
int centmatsum(int arr[][3],int row , int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j == 1){
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int result = centmatsum(arr,row , col);
    cout<<result;
}