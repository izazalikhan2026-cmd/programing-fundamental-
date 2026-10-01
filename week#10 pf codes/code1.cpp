#include<iostream>
using namespace std;
main(){
   cout<<"enter the number u want its table "<<endl;
   int a;
   cin>>a;
   int multiple;
   for(int i=1; i<=10; i++)
   {
      multiple = i * a;
      cout<<i <<"*" <<a<< "=" <<multiple<<endl;
   }

}