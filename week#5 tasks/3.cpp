#include<iostream>
using namespace std;
void transpose(int  arr[][3], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;
    transpose(arr,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}