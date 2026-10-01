#include <iostream>
using namespace std;

void input(int arr[], int n){
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
}void print(int arr[], int n){
    for (int i=0;arr[i]!='\0'; i++){
        cout<<arr[i];
    }
}

int main(){
    cout<<"enter ur size";
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    print(arr,n);

}