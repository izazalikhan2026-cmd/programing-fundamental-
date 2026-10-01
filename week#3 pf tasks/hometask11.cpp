#include <iostream>
using namespace std;
main(){
int population;
cout<<"Enter the current population"<<endl;
cin>>population;
int n;
cout<<"Enter the monthly birth rate"<<endl;
cin>>n;
int t_population=population+(n*360);
cout<<"population in three decades will be "<<t_population<<endl;
}