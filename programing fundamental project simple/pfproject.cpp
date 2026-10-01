#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
main(){
    string product[100]={"iphone, smartwatch,samsung,googlepixel, infinix"};
    int price[100]={500000,50000,300000,300000,100000};
    int warranty[100]={1,2,3,4,5}
    float discount[100]={0.20,0.05,0.30,0.15,0.25};
    
    cout<<"*****************************************" <<endl;
    cout<<"*************IZK ELECTRONICS*************" <<endl;
    cout<<"*****************************************" <<endl;
    cout<<"enter who are you"<<endl;
    int choice ;
    cout<<"1. Admin"   <<endl;
    cout<<"2. constumer"<<endl;
    cout<<"3. goback "  <<endl;
    cin>>choice;
    if(choice ==1){
        string name;
        int password;
        cout<<" admin enter your name first";
        cin>>name;
        cout<<"enter password";
        cin>>password;
             if(name=="izaz" && password==2026)
             {
                cout<<"******Welcome admin*******"<<endl;
                cout<<" 1. add products:"<<endl;
                cout<<" 2. remove demage products:"<<endl;
                cout<< "3. view availible products:"<<endl;
                cout<<" 4. change the price :"<<endl;
                cout<<"5.logout"<<endl;

                cout<<"enter your option:"<<endl;
                cin>>opt;
                if(adm_opt==1){
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

                }else if(adm_opt==2){
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
                  else if(adm_opt==3){
                    string view;
                    cout<<"enter the items you want to view";
                    cin>>view;
                    for(int i=0; i<count;i++){
                        cout<<product[i] <<endl;
                        cout<< price[i] <<endl;
                        cout<< warrenty[i] <<endl;
                        cout<< discount[i] <<endl;
                    }

                    }
                     
                }else if(adm_opt==4)
                {
                    string target;
                    cout<<"enter the item name you want to change its price";
                    cin>>price;
                    for(int i=0; i<count;i++)
                    {
                       if (product[i]== target;)
                       {
                        cout<<"enter new price:";
                        cin>>price;
                        cout<<"price updated" <<endl;
                       } 
                    }
                }
                    

             }else if(adm_opt == 5){
                cout<<"logout" <<<endl;
             }
             else{
                cout<<"wrong name or password"<<endl;
                cout<<"too many wrong attempts"<<endl;
             }           
             else if( choice ==2)
             {
              int cust_opt =0;
              float total_bill =0;
            cout<<"**********************************" <<endl;
                cout<<"Welcome to izk elctronics "<<endl;
            cout<<"*********************************"<<endl;
               while(cust_opt !=3)
               {
                cout<<" 1.view products" <<endl;
                cout<<" 2.add to cart" <<endl;
                cout<<" 3.exit " <<endl;
                cout<<" chose option:";
                cin>> cust_opt;
                if( cust_opt==1)
                {
                    cout<<"product";
                    cout<<"price" <<endl;
                    for(int i=0; i<count;i++)
                    {
                        cout<<product[i];
                        cout<<price[i] <<endl;

                    }
                }
                else if(cust_opt==2)
               {
                string buy_product;
                int quantity;
                cout<<"enter product name:";
                cin>>buy_product;
                cout<<" enter quantity";
                cin>>quantity;

                bool found = false;
                for(int i=0;i<count;i++)
                {if (product[i]== buy_product)
                    {
                        float item_price=price[i]-(item_price* discont[i]);
                        total_bill= total_bill +(item_price* quantity);
                        cout <<" added to cart";
                        cout<<"current Bill:" <<total_bill <<endl;
                        found = true;
                    }

                }if (!found)
                cout<<"product not found" <<endl;
               }
               else if(cust==3)
               {
                cout<<"-------Bill Receipt--------"<< endl;
                cout<< "Total amount to Pay:"<< total_bill <<end;
                 
                cout<<"THANKS FOR SHOPING " <<endl;
               
             }
        }
    }
    else if (choice==3)
    {
        exit_program ;
    }
}
return 0;     

}