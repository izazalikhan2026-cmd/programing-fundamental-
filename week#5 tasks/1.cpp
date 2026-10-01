#include<iostream>
using namespace std;

void sumofmatrix(int arr1[][3],int arr2[][3],int arr3[][3],int row,int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main(){
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr3[3][3] ;
    int row = 3;
    int col = 3;
    sumofmatrix(arr1,arr2,arr3,row,col);
    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){
            cout<<arr3[i][j ]<<"  " ;
        }
        cout<<endl;
    }
}