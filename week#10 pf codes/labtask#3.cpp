#include<iostream>
#include <cmath>
using namespace std;
int max(int number1, int number2);

int main()
{
    int number1, number2;
    cout<<"enter number01:";
    cin>>number1;
    cout<<"enter number02:";
    
    cin>>number2;
    cout<<"greater number:" <<max(number1, number2);
    return 0;
}
int max(int number1, int number2)
{
    if(number1>number2)

    {
     return number1;}
    else
    {
    return number2;}

}