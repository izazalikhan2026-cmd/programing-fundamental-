#include <iostream>
using namespace std;

int main() {
    int red, white, tulips;
    cout << "Red Rose: "; cin >> red;
    cout << "White Rose: "; cin >> white;
    cout << "Tulips: "; cin >> tulips;

    double originalPrice = (red * 2.00) + (white * 4.10) + (tulips * 2.50);
    double finalPrice = originalPrice;

    if (originalPrice > 200) {
        finalPrice = originalPrice * 0.80; // Apply 20% discount
    }

    cout << "Original Price: " << originalPrice << endl;
    if (originalPrice > 200) {
        cout << "Price after Discount: " << finalPrice << endl;
    }
    return 0;
}