#include<iostream>
using namespace std;
main(){
    string password, username ;
    password ="izazak77";
    cout<<"enter you password:";
    cin>>password;
    cout<<"enter your username:";
    cin>>username;
    if(password == username){
        cout<<"yes!You have cracked the code";
    }
    else{
        cout<<"this is not that simple,  Try again";
    }
}
