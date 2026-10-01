#include <iostream>
using namespace std;

int sum(int a, int b ){
    int s = a+b;
    return s;
}
 int minoftwo(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
    int main()
    {
        cout<< "min =" <<minoftwo(5,3)<<endl;
        return 0;
    }
 }



