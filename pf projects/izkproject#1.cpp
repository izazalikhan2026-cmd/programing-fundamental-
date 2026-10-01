#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // product data
   string product_name[100] = {"iphone", "smartwatch", "samsung", "googlepixel", "infinix"};

    string product_category[100] = {"Mobile", "Wearable", "Mobile", "Mobile", "Mobile"};
    float product_price[100] = { 500000,50000, 300000, 300000, 100000};
    int product_quantity[100] = { 5, 10, 7, 4, 8 };
    // bill data
    string buyed_product[100];
    int buyed_quantity[100];
    float total_bills[100]; 
    //ntbuyed_product = 5;
    int total_bill = 0;
    int total_products=5;
    int choice;
    int admin_choice;
    int costumer_choice;
    while (true)
    {
        system("cls");
     cout<<"*****************************************" <<endl;
    cout<<"*************IZK ELECTRONICS*************" <<endl;
    cout<<"*****************************************" <<endl;
        cout << "1. Admin Menu" << endl;
        cout << "2. Customer Menu" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your option: ";
        int option;
        cin >> option;
        cout << " You choose " << option << endl;
        ;
        if (option == 1)
        {
            system("cls");
            bool exit_admin = false;
            for (int i = 0; i < 3; i++)
            {
                cout << " Login attempt " << i + 1 << endl;
                cout << "Enter admin pasword : ";
                string admin_pasword;
                cin >> admin_pasword;
                if (admin_pasword == "izk1234")
                {
                    cout << " successfully loged in " << endl;
                    cout << "press any key to continue";
                    getch();

                    int admin_choice = 0;
                    while (admin_choice != 6)
                    {
                        system("cls");
                        cout << "========== ADMIN MENU ==========" << endl;
                        cout << "1. Add Product" << endl;
                        cout << "2. View Products" << endl;
                        cout << "3. Search Product" << endl;
                        cout << "4. Update product " << endl;
                        cout << "5. Delete Product" << endl;
                        cout << "6. Exit" << endl;
                        cout << "Enter your choice : ";
                        cin >> admin_choice;
                        if (admin_choice == 1)
                        {
                            // add product
                            system("cls");
                            cout << "=========ADD PRODUCT=========" << endl;
                            cout << "Enter Product Name: ";
                            cin >> product_name[total_products];
                            cout << "Enter Product Category: ";
                            cin >> product_category[total_products];
                            cout << "Enter Product Price: ";
                            cin >> product_price[total_products];
                            cout << "Enter Product Quantity: ";
                            cin >> product_quantity[total_products];total_bill++;
                            cout << "Product added successfully" << endl;
                            cout << "press any key to continue" << endl;
                            getch();
                        }
                        else if (admin_choice == 2)
                        {
                            // view product
                            system("cls");
                            cout << "-----------ALL PRODUCTS-------------" << endl;
                            if (total_products == 0)
                            {
                                cout << "No products available." << endl;
                            }
                            else
                            {
                                for (int i = 0; i <total_bill; i++)
                                {
                                    cout << "Product " << i + 1 << endl;
                                    cout << "Name: " << product_name[i] << endl;
                                    cout << "Category: " << product_category[i] << endl;
                                    cout << "Price: " << product_price[i] << endl;
                                    cout << "Quantity: " << product_quantity[i] << endl;
                                }
                            }
                            cout << "press any key to continue " << endl;
                            getch();
                        }
                        else if (admin_choice == 3)
                        {
                            // search product
                            system("cls");
                            string search_product;
                            bool found = false;
                            cout << "-----------Search Product-----------" << endl;
                            cout << "Enter product name: ";
                            cin >> search_product;
                            for (int i = 0; i <total_bill; i++)
                            {
                                if (search_product == product_name[i])
                                {
                                    found = true;
                                    cout << "******Product Found******" << endl;
                                    cout << "Name: " << product_name[i] << endl;
                                    cout << "Category: " << product_category[i] << endl;
                                    cout << "Price: " << product_price[i] << endl;
                                    cout << "Quantity: " << product_quantity[i] << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Product Not Found" << endl;
                            }
                            getch();
                        }
                        else if (admin_choice == 4)
                        {
                            // update  product
                            system("cls");
                            string update_product;
                            bool isfound = false;
                            cout << "*********** UPDATE PRODUCT ************" << endl;
                            cout << "Enter Product Name: ";
                            cin >> update_product;
                            for (int i = 0; i <total_bill; i++)
                            {
                                if (update_product == product_name[i])
                                {
                                    isfound = true;
                                    cout << "Enter New Product Name: ";
                                    cin >> product_name[i];
                                    cout << "Enter New Category: ";
                                    cin >> product_category[i];
                                    cout << "Enter New Price: ";
                                    cin >> product_price[i];
                                    cout << "Enter New Quantity: ";
                                    cin >> product_quantity[i];
                                    cout << "Product Updated Successfully" << endl;
                                }
                            }
                            if (isfound == false)
                            {
                                cout << "Product Not Found" << endl;
                            }

                            getch();
                        }
                        else if (admin_choice == 5)
                        {
                            // delete product
                            system("cls");

                            string delete_product;
                            bool iffound = false;
                            cout << "------------ DELETE PRODUCT -------------" << endl;
                            cout << "Enter Product Name: ";
                            cin >> delete_product;
                            for (int i = 0; i <total_bill; i++)
                            {
                                if (delete_product == product_name[i])
                                {
                                    iffound = true;
                                    for (int j = i; j <total_bill - 1; j++)
                                    {
                                        product_name[j] = product_name[j + 1];
                                        product_category[j] = product_category[j + 1];
                                        product_price[j] = product_price[j + 1];
                                        product_quantity[j] = product_quantity[j + 1];
                                    }

                                   total_bill--;
                                    cout << "Product Deleted Successfully" << endl;
                                    cout<<"press any key to continue"<<endl;
                                    break;
                                }
                            }

                            if (iffound == false)
                            {
                                cout << "Product Not Found" << endl;
                            }
                            getch();
                        }
                        else if (admin_choice == 6)
                        {
                            cout << " To exit admin menu press any key " << endl;
                            getch();
                        }
                        else
                        {
                            cout << " Invalid option!" << endl;
                            cout << "press any key to continue" << endl;
                            getch();
                        }
                    }
                    exit_admin = true;
                }
                else
                {
                    cout << "wrong pasword" << endl;
                    cout << "press any key to continue" << endl;
                    getch();
                }
            }
        }

        else if (option == 2)
        {
            int costumer_choice = 0;
            while (costumer_choice != 6)
            {
                system("cls");
                cout << "********** CUSTOMER MENU ***********" << endl;
                cout << "1. View Products" << endl;
                cout << "2. Search Product" << endl;
                cout << "3. Buy Product" << endl;
                cout << "4. Generate Bill" << endl;
                cout << "5. View Available Stock" << endl;
                cout << "6. Exit" << endl;
                cout << "Enter Your Choice: ";
                cin >> costumer_choice;

                if (costumer_choice == 1)
                {
                    system("cls");

                    cout << "************ ALL PRODUCTS ************"
                         << endl;
                    for (int i = 0; i <total_bill; i++)
                    {
                        cout << "Product "<< i + 1 << endl;
                        cout << "Name: "<< product_name[i]<< endl;
                        cout << "Category: "<< product_category[i]<< endl;
                        cout << "Price: "<< product_price[i]<< endl;
                        cout << "Quantity: " << product_quantity[i]<< endl;
                    }
                    getch();
                }
                else if (costumer_choice == 2)
                {
                    system("cls");
                    string search_product;
                    bool found = false;
                    cout << "Enter Product Name: ";
                    cin >> search_product;
                    for (int i = 0; i <total_products; i++)
                    {
                        if (search_product ==product_name[i])
                        {
                            found = true;
                            cout << "Product Found" << endl;
                            cout << "Name: " << product_name[i] << endl;
                            cout << "Category: "<< product_category[i]<< endl;
                            cout << "Price: "<< product_price[i]<< endl;
                            cout << "Quantity: "<< product_quantity[i] << endl;
                        }
                    }
                    if (found == false)
                    {
                        cout << "Product Not Found" << endl;
                    }
                    getch();
                }
                else if (costumer_choice == 3)
                {
                    system("cls");
                    string buy_product;
                    int quantity;
                    bool found = false;
                    cout << "Enter Product Name: ";
                    cin >> buy_product;
                    cout << "Enter Quantity: ";
                    cin >> quantity;
                    int total_products=5;
                    
                        if (buy_product == product_name[i])
                            
                        {
                            found = true;
                            if (quantity <= product_quantity[i])
                            {
                                product_quantity[i] = product_quantity[i] - quantity;
                                buyed_product[total_bill] = product_name[i];     
                                buyed_quantity[total_bill] = quantity;
                                total_bills[total_bill] = product_price[i] * quantity;
                                total_bill++;
                                cout << "Product Purchased Successfully"<< endl;
                            }
                            else
                            {
                                cout << "Not Enough Stock Available"<< endl;
                            }
                        }
                    }
                    if (found == false)
                    {
                        cout << "Product Not Found"
                             << endl;
                    }
                    getch();
                }
                else if (costumer_choice == 4)
                {
                    system("cls");
                    float grand_total = 0;
                    cout << "========== CUSTOMER BILL =========="<< endl;
                    for (int i = 0;
                         i < total_bill;
                         i++)
                    {
                        cout << "Product: " << buyed_product[i] << endl;
                        cout << "Quantity: " << buyed_quantity[i] << endl;
                        cout << "Bill: " << total_bills[i] << endl;
                        grand_total = grand_total + total_bills[i];
                    }
                    cout << "Total Bill = "<< grand_total << endl;
                    getch();
                }
                else if (costumer_choice == 5)
                {
                    system("cls");
                    cout << "*********** AVAILABLE STOCK ***********"
                         << endl;
                    for (int i = 0;i <total_bill; i++)
                    {
                        cout << product_name[i]<< " = " << product_quantity[i] << endl;
                    }
                    getch();
                }
                else if (costumer_choice == 6)
                {
                    break;
                }

                else
                {
                    cout << "Invalid Option"<< endl;
                    getch();
                }
            }
        }
else if (option == 3)
{
    break;
}
else
{
    cout << " You entered the wrong option " << endl;
    getch();
}
}

cout << "Thanks for using this software " << endl;

return 0;
}
