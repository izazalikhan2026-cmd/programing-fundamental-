#include <iostream>
#include <conio.h>
using namespace std;

// GLOBAL DATA 
string product_name[100]= {"iphone", "smartwatch", "samsung", "googlepixel", "infinix"};
string product_category[100] = {"Mobile", "Wearable", "Mobile", "Mobile", "Mobile"};
float product_price[100] = {500000, 50000, 300000, 300000, 100000};
int product_quantity[100] = {5, 10, 7, 4, 8};

string buyed_product[100];
int buyed_quantity[100];
float total_bills[100];
int total_products = 5;
int total_bill = 0;

//  functions declaration
void showmainmenu();
int getuseroption();
void adminlogin();
void adminmenu(string product_name[], string product_category[],float product_price[], int product_quantity[], int &total_products);
void addproduct(string product_name[], string product_category[], float product_price[], int product_quantity[], int &total_products);
void viewproducts(string product_name[], string product_category[],float product_price[], int product_quantity[], int total_products);
void searchproduct(string product_name[], string product_category[],float product_price[], int product_quantity[], int total_products);
void updateproduct(string product_name[], string product_category[],float product_price[], int product_quantity[], int total_products);
void deleteproduct(string product_name[], string product_category[],float product_price[], int product_quantity[], int &total_products);
void costomermenu(string product_name[], string product_category[], float product_price[], int product_quantity[], int &total_products,string buyed_product[], int buyed_quantity[], float total_bills[], int &total_bill);
void buyproduct(string product_name[], float product_price[], int product_quantity[],int total_products, string buyed_product[], int buyed_quantity[],float total_bills[], int &total_bill);
void generatebill(string buyed_product[], int buyed_quantity[], float total_bills[], int total_bill);
void viewstock(string product_name[], int product_quantity[], int total_products);

//  main function 
int main()
{
 while (true)
    {
     system("cls");
        cout << "*****************************************" << endl;
        cout << "************* IZK ELECTRONICS *************" << endl;
        cout << "*****************************************" << endl;
         showmainmenu();
        int option;
        option= getuseroption();
        if(option ==1)
        {
         adminlogin();
        }
        else if(option == 2)
        {
          costomermenu(product_name, product_category, product_price, product_quantity,total_products, buyed_product, buyed_quantity, total_bills, total_bill);
        }
        else if(option == 3)
        {
         cout << "\nThanks for using IZK Electronics Software!" << endl;
            break;
        }
        else
        {
          cout << "Wrong option! please try again." << endl;
            getch();
        }
    }
    return 0;
}

// functions defination
void showmainmenu()
{
    cout << "1. Admin menu" << endl;
    cout << "2. Customer menu" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your option: ";
}
int getuseroption()
{
    int option;
    cin >> option;
    return option;
}

void adminlogin()
{
  system("cls");
    bool loggedin = false;

    for (int i = 0; i < 3; i++)
    {
        cout << "Login attempt " << i + 1 << "/3" << endl;
        cout << "Enter admin password: ";
        string password;
        cin >> password;
        if (password == "izk1234")
        {
            cout << "\nSuccessfully loged in!" << endl;
            getch();
            loggedin = true;
            break;
        }
        else
        {
            cout << "Wrong password!" << endl;
            getch();
        }
    }

    if (loggedin)
    {
      adminmenu(product_name, product_category, product_price, product_quantity, total_products);
    }
}

void adminmenu(string product_name[], string product_category[], float product_price[], int product_quantity[], int &total_products)
{
    int choice = 0;
    while (choice != 6)
    {
      system("cls");
        cout << "******* ADMIN MENU ********" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. View Products" << endl;
        cout << "3. Search Product" << endl;
        cout << "4. Update Product" << endl;
        cout << "5. Delete Product" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1){
             addproduct(product_name, product_category, product_price, product_quantity, total_products);}
        else if (choice == 2){
        viewproducts(product_name, product_category, product_price, product_quantity, total_products);
        }
        else if (choice == 3){
            searchproduct(product_name, product_category, product_price, product_quantity, total_products);
        }
        else if (choice == 4){
             updateproduct(product_name, product_category, product_price, product_quantity, total_products);}
        else if (choice == 5){
             deleteproduct(product_name, product_category, product_price, product_quantity, total_products);}
        else if (choice == 6) {
            cout << "Exiting admin menu..." << endl;
            getch();
        }
        else {
            cout << "Invalid option!" << endl;
            getch();
        }
    }
}

// admin functions with parameters
void addproduct(string product_name[], string product_category[],float product_price[], int product_quantity[], int &total_products)
{
  system("cls");
    cout << "------------ ADD PRODUCT ----------------" << endl;

    cout <<"Enter product name: ";
    cin >> product_name[total_products];
    cout <<"enter product category: ";
    cin >> product_category[total_products];
    cout <<"Enter product price: ";
    cin >> product_price[total_products];
    cout <<"Enter product quantity: ";
    cin >> product_quantity[total_products];
    total_products++;
    cout << "\nProduct added successfully!" << endl;
    getch();
}
void viewproducts(string product_name[], string product_category[], 
                  float product_price[], int product_quantity[], int total_products)
{
  system("cls");
    cout << "----------- ALL PRODUCTS -----------" << endl;

    if (total_products == 0) {
        cout << "No products available." << endl;
    } else {
        for (int i = 0; i < total_products; i++) {
            cout << "\nProduct " << i + 1 << endl;
            cout << "Name     : " << product_name[i] << endl;
            cout << "Category : " << product_category[i] << endl;
            cout << "Price    : " << product_price[i] << endl;
            cout << "Quantity : " << product_quantity[i] << endl;
        }
    }
    cout << "\nPress any key...";
    getch();
}

void searchproduct(string product_name[], string product_category[], float product_price[], int product_quantity[], int total_products)
{
  system("cls");
    string search_name;
    bool found = false;
    cout << "----------- SEARCH PRODUCT -----------" << endl;
    cout << "Enter product name: ";
    cin >> search_name;
    for (int i = 0; i < total_products; i++)
    {
        if (search_name == product_name[i])
        {
          found = true;
         cout << "\n****** Product Found ******" << endl;
         cout << "Name     : " << product_name[i] << endl;
         cout << "Category : " << product_category[i] << endl;
         cout << "Price    : " << product_price[i] << endl;
         cout << "Quantity : " << product_quantity[i] << endl;
            break;
        }
    }
    if (!found) cout << "Product not found!" << endl;
    getch();
}

void updateproduct(string product_name[], string product_category[],float product_price[], int product_quantity[], int total_products)
{
    system("cls");
    string update_name;
    bool found = false;
    cout << "========== UPDATE PRODUCT ==========" << endl;
    cout << "Enter product name: ";
    cin >> update_name;
    for (int i = 0; i < total_products; i++)
    {
        if (update_name == product_name[i])
        {
            found = true;
            cout << "Enter new name     : "; cin >> product_name[i];
            cout << "Enter new category : "; cin >> product_category[i];
            cout << "Enter new price    : "; cin >> product_price[i];
            cout << "Enter new quantity : "; cin >> product_quantity[i];
            cout << "\nProduct updated successfully!" << endl;
            break;
        }
    }
    if (!found) cout << "Product not found!" << endl;
    getch();
}
void deleteproduct(string product_name[], string product_category[], float product_price[], int product_quantity[], int &total_products)
{
    system("cls");
    string delete_name;
    bool found = false;

    cout << "========== DELETE PRODUCT ==========" << endl;
    cout << "Enter product name: ";
    cin >> delete_name;
    for (int i = 0; i < total_products; i++)
    {
        if (delete_name == product_name[i])
        {
            found = true;
            for (int j = i; j < total_products - 1; j++)
            {
                product_name[j] = product_name[j + 1];
                product_category[j] = product_category[j + 1];
                product_price[j] = product_price[j + 1];
                product_quantity[j] = product_quantity[j + 1];
            }
            total_products--;
            cout << "Product deleted successfully!" << endl;
            break;
        }
    }
    if (!found) cout << "Product not found!" << endl;
    getch();
}

//  CUSTOMER FUNCTIONS
void costomermenu(string product_name[], string product_category[], float product_price[], int product_quantity[], int &total_products, string buyed_product[], int buyed_quantity[], float total_bills[], int &total_bill)
{
    int choice = 0;
    while (choice != 6)
    {
        system("cls");
        cout << "********* CUSTOMER MENU ***********" << endl;
        cout << "1. View products" << endl;
        cout << "2. Search product" << endl;
        cout << "3. Buy product" << endl;
        cout << "4. Generate bill" << endl;
        cout << "5. View stock" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            viewproducts(product_name, product_category, product_price, product_quantity, total_products);}
        else if (choice == 2){
             searchproduct(product_name, product_category, product_price, product_quantity, total_products);}
        else if (choice == 3) {
            buyproduct(product_name, product_price, product_quantity, total_products, buyed_product, buyed_quantity, total_bills, total_bill);}
        else if (choice == 4) {
            generatebill(buyed_product, buyed_quantity, total_bills, total_bill);}
        else if (choice == 5){
            viewstock(product_name, product_quantity, total_products);}
        else if (choice == 6) {
            cout << "Exiting customer menu..." << endl;
            getch();
        }
        else {
            cout << "Invalid Option!" << endl;
            getch();
        }
    }
}
void buyproduct(string product_name[], float product_price[], int product_quantity[], int total_products, string buyed_product[], int buyed_quantity[], float total_bills[], int &total_bill)
{
  system("cls");
    string buy_name;
    int qty;
    bool found = false;
    cout << "Enter product name: ";
    cin >> buy_name;
    cout << "Enter quantity: ";
    cin >> qty;

    for (int i = 0; i < total_products; i++)
    {
        if (buy_name == product_name[i])
        {
            found = true;
            if (qty <= product_quantity[i])
            {
                product_quantity[i] -= qty;
                buyed_product[total_bill] = product_name[i];
                buyed_quantity[total_bill] = qty;
                total_bills[total_bill] = product_price[i] * qty;
                total_bill++;

                cout << "\nProduct purchased successfully!" << endl;
            }
            else
            {
                cout << "\nNot enough stock!" << endl;
            }
            break;
        }
    }
    if (!found) cout << "\nProduct not found!" << endl;
    getch();
}
void generatebill(string buyed_product[], int buyed_quantity[],float total_bills[], int total_bill)
{
    system("cls");
    float grand_total = 0;

    cout << "************** CUSTOMER BILL *************" << endl;
    for (int i = 0; i < total_bill; i++)
    {
        cout << "Product  : " << buyed_product[i] << endl;
        cout << "Quantity : " << buyed_quantity[i] << endl;
        cout << "Amount   : " << total_bills[i] << endl;
        grand_total += total_bills[i];
    }
    cout << "\nGrand total = " << grand_total << endl;
    getch();
}
void viewstock(string product_name[], int product_quantity[], int total_products)
{
    system("cls");
    cout << "*********** AVAILABLE STOCK *************" << endl;
    for (int i = 0; i < total_products; i++)
    {
        cout << product_name[i] << " = " << product_quantity[i] << " units" << endl;
    }
    getch();
}