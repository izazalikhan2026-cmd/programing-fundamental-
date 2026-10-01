#include <iostream>
#include <string>
using namespace std;
main(){
    string product[100]={"iphone, smartwatch,smasung,googlepixel, infinix"};
    int price[100]={500000,50000,300000,300000,100000};
    int warrenty[100]={1,2,3,4,5}
    float discount[100]={0.20,0.05,0.30,0.15,0.25};
    
    cout<<"*****************************************" <<endl;
    cout<<"*************IZK ELECTRONICS*************" <<endl;
    cout<<"*****************************************" <<endl;
    cout<<"enter who are you"<<endl;
    int choice ;
    cout<<"1. Admin"   <<endl;
    cout<<"2. constumer"<<endl;
    cout<<"3. goback "  <<endl;
  ;  cin>>choice;
    if(choice ==1){
        string name=;
        int password=;
        cout<<" admin enter your name first";
        cin>>name;
        cout<<"enter password";
        cin>>password;
             if(name=="izaz" && password==2026){
                int admi_opt=0;
                while(admin_opt!=6)}
                cout<<"******Welcome admin*******"<<endl;
                cout<<" 1. add products:"<<endl;
                cout<<" 2. remove demage products:"<<endl;
                cout<< "3. view availible products:"<<endl;
                cout<<" 4. change the price :"<<endl;
                cout<<"5.logout"<<endl;
            
                cout<<"enter your option:"<<endl;
                cin>>admin_opt;
                if(admi_opt==1){
                    cout<<"enter your desire product:"<<endl;
                    cin>>product;
                    cout<<"enter price";
                    cin>>price;
                    cout<<"enter warranty";
                    cin>>warranty;
                    cout<<"enter discount";
                    cin>>discount[count];
                    count++;
                    cout<<"product added successfully" <<endl;

                }else if(admin_opt==2){
                   string remove ;
                   cout<<"enter the item name you want to remove";
                   cin>>remove;

                   for(int i=0; i<count;i++){
                    if (product[i]==remove){
                        for(int j=i;j<count-1;j++){
                            product[j]=product[j+1];
                            warrenty[j]=warrenty[j+1];
                            discount[j]=discont[j+1];
                        }
                        count--;
                        cout<<"item removed successfully";<<endl;
                    }
                   }
                }

                    system("cls");
                }else if(opt==3){
                    avalible product;
                    system("cls");
                }else if(opt==4){
                    change the price;
                    system("cls");

             }else{
                cout<<"wrong product selected"<<endl;
             }
             else{
                cout<<"wrong name or password"<<endl;
                cout<<"too many wrong attempts"<<endl;
             }

             }
             else if( choice ==2){
                system("cls");
                cout<<"Welcome to izk elctronics "<<endl;
                cout<<"**************************"<<endl;
                cout<<"all availiblr products with its prices:"<<endl;
                cout<<"add to cart:"<<endl;
                cout<<"your total bill is: "<<endl;


             }
        }
    }

}