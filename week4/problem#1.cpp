#include <iostream>

using namespace std;

int main() {
    string country;
    double price, finalPrice, discount;

    cout << "Enter Country: ";
    cin >> country;
    cout << "Enter Ticket Price: ";
    cin >> price;

    
    if (country == "Ireland" || country == "ireland") {
        discount = 0.10;
    } else {
        discount = 0.05;
    }

    finalPrice = price - (price * discount);

    cout << "Discounted Price: " << finalPrice << endl;

    return 0;
}