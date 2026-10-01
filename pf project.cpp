#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    // data structures//

    // product data
    string productname[100] = {"laptop", "mouse", "keyboard"};
    string productcategory[100] = {"Electronics", " Accessories", " accessories"};
    float productprice[100] = {120000, 1500, 3000};
    int productquantity[100] = {5, 20, 10};

    // bill data
    string buyedproduct[100];
    int buyedquantity[100];
    float totalbills[100];

    int totalproducts = 3;
    int totalbill = 0;

    int choice;
    int adminchoice;
    int costumerchoice;

    while (true)
    {
        system("cls");
        cout << "       IZK ELECTRONICS   " << endl;
        cout << " ==================================== " << endl;
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
            bool exitadmin = false;

            for (int i = 0; i < 3 && !exitadmin; i++)
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

                    int adminchoice = 0;
                    while (adminchoice != 6)
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
                        cin >> adminchoice;

                        if (adminchoice == 1)
                        {
                            // add product

                            system("cls");
                            cout << "=========ADD PRODUCT=========" << endl;

                            cout << "Enter Product Name: ";
                            cin >> productname[totalproducts];

                            cout << "Enter Product Category: ";
                            cin >> productcategory[totalproducts];

                            cout << "Enter Product Price: ";
                            cin >> productprice[totalproducts];

                            cout << "Enter Product Quantity: ";
                            cin >> productquantity[totalproducts];

                            totalproducts++;

                            cout << "Product added successfully" << endl;
                            cout << "press any key to continue" << endl;
                            getch();
                        }
                        else if (adminchoice == 2)
                        {
                            // view product
                            system("cls");
                            cout << "-----------ALL PRODUCTS-------------" << endl;

                            if (totalproducts == 0)
                            {
                                cout << "No products available." << endl;
                            }
                            else
                            {
                                for (int i = 0; i < totalproducts; i++)
                                {
                                    cout << "Product " << i + 1 << endl;
                                    cout << "Name: " << productname[i] << endl;
                                    cout << "Category: " << productcategory[i] << endl;
                                    cout << "Price: " << productprice[i] << endl;
                                    cout << "Quantity: " << productquantity[i] << endl;
                                }
                            }
                            cout << "press any key to continue " << endl;
                            getch();
                        }
                        else if (adminchoice == 3)
                        {
                            // search product
                            system("cls");

                            string searchproduct;
                            bool found = false;

                            cout << "-----------Search Product-----------" << endl;

                            cout << "Enter Product Name: ";
                            cin >> searchproduct;

                            for (int i = 0; i < totalproducts; i++)
                            {
                                if (searchproduct == productname[i])
                                {
                                    found = true;

                                    cout << "******Product Found******" << endl;

                                    cout << "Name: " << productname[i] << endl;
                                    cout << "Category: " << productcategory[i] << endl;
                                    cout << "Price: " << productprice[i] << endl;
                                    cout << "Quantity: " << productquantity[i] << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Product Not Found" << endl;
                            }
                            getch();
                        }

                        else if (adminchoice == 4)
                        {
                            // update  product
                            system("cls");

                            string updateproduct;
                            bool isfound = false;

                            cout << "========== UPDATE PRODUCT ==========" << endl;

                            cout << "Enter Product Name: ";
                            cin >> updateproduct;

                            for (int i = 0; i < totalproducts; i++)
                            {
                                if (updateproduct == productname[i])
                                {
                                    isfound = true;

                                    cout << "Enter New Product Name: ";
                                    cin >> productname[i];

                                    cout << "Enter New Category: ";
                                    cin >> productcategory[i];

                                    cout << "Enter New Price: ";
                                    cin >> productprice[i];

                                    cout << "Enter New Quantity: ";
                                    cin >> productquantity[i];

                                    cout << "Product Updated Successfully" << endl;
                                }
                            }

                            if (isfound == false)
                            {
                                cout << "Product Not Found" << endl;
                            }

                            getch();
                        }
                        else if (adminchoice == 5)
                        {
                            // delete product
                            system("cls");

                            string deleteproduct;
                            bool iffound = false;

                            cout << "========== DELETE PRODUCT ==========" << endl;

                            cout << "Enter Product Name: ";
                            cin >> deleteproduct;

                            for (int i = 0; i < totalproducts; i++)
                            {
                                if (deleteproduct == productname[i])
                                {
                                    iffound = true;

                                    for (int j = i; j < totalproducts - 1; j++)
                                    {
                                        productname[j] = productname[j + 1];
                                        productcategory[j] = productcategory[j + 1];
                                        productprice[j] = productprice[j + 1];
                                        productquantity[j] = productquantity[j + 1];
                                    }

                                    totalproducts--;

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
                        else if (adminchoice == 6)
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
                    exitadmin = true;
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
                cout << "========== CUSTOMER MENU ==========" << endl;
                cout << "1. View Products" << endl;
                cout << "2. Search Product" << endl;
                cout << "3. Buy Product" << endl;
                cout << "4. Generate Bill" << endl;
                cout << "5. View Available Stock" << endl;
                cout << "6. Exit" << endl;

                cout << "Enter Your Choice: ";
                cin >> costumer_choice;

                if (costumerchoice == 1)
                {
                    system("cls");

                    cout << "========== ALL PRODUCTS =========="
                         << endl;

                    for (int i = 0;
                         i < totalproducts;
                         i++)
                    {
                        cout << "\nProduct "
                             << i + 1 << endl;

                        cout << "Name: "
                             << productname[i]
                             << endl;

                        cout << "Category: "
                             << productcategory[i]
                             << endl;

                        cout << "Price: "
                             << productprice[i]
                             << endl;

                        cout << "Quantity: "
                             << productquantity[i]
                             << endl;
                    }

                    getch();
                }
                else if (costumer_choice == 2)
                {
                    system("cls");

                    string searchproduct;

                    bool found = false;

                    cout << "Enter Product Name: ";

                    cin >> searchproduct;

                    for (int i = 0;
                         i < totalproducts;
                         i++)
                    {
                        if (searchproduct ==
                            productname[i])
                        {
                            found = true;

                            cout << "\nProduct Found"
                                 << endl;

                            cout << "Name: "
                                 << productname[i]
                                 << endl;

                            cout << "Category: "
                                 << productcategory[i]
                                 << endl;

                            cout << "Price: "
                                 << productprice[i]
                                 << endl;

                            cout << "Quantity: "
                                 << productquantity[i]
                                 << endl;
                        }
                    }

                    if (found == false)
                    {
                        cout << "\nProduct Not Found"
                             << endl;
                    }

                    getch();
                }
                else if (costumer_choice == 3)
                {
                    system("cls");

                    string buyproduct;

                    int quantity;

                    bool found = false;

                    cout << "Enter Product Name: ";
                    cin >> buyproduct;

                    cout << "Enter Quantity: ";
                    cin >> quantity;

                    for (int i = 0; i < totalproducts;i++)
                    {
                        if (buyproduct == productname[i])
                            
                        {
                            found = true;

                            if (quantity <=
                                productquantity[i])
                            {
                                productquantity[i] =
                                    productquantity[i] -
                                    quantity;

                                buyedproduct[totalbill] =
                                    productname[i];

                                buyedquantity[totalbill] =
                                    quantity;

                                totalbills[totalbill] =
                                    productprice[i] * quantity;

                                totalbill++;

                                cout << "Product Purchased Successfully"
                                     << endl;
                            }

                            else
                            {
                                cout << "Not Enough Stock Available"
                                     << endl;
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

                    float grandtotal = 0;

                    cout << "========== CUSTOMER BILL =========="
                         << endl;

                    for (int i = 0;
                         i < totalbill;
                         i++)
                    {
                        cout << "Product: "
                             << buyedproduct[i]
                             << endl;

                        cout << "Quantity: "
                             << buyedquantity[i]
                             << endl;

                        cout << "Bill: "
                             << totalbills[i]
                             << endl;

                        grandtotal =
                            grandtotal +
                            totalbills[i];
                    }

                    cout << "\nTotal Bill = "
                         << grandtotal << endl;

                    getch();
                }
                else if (costumer_choice == 5)
                {
                    system("cls");

                    cout << "========== AVAILABLE STOCK =========="
                         << endl;

                    for (int i = 0;
                         i < totalproducts;
                         i++)
                    {
                        cout << productname[i]
                             << " = "
                             << productquantity[i]
                             << endl;
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
