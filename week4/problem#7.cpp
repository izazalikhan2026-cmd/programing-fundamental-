#include <iostream>


using namespace std;

int main() {
    string shape;
    double area;

    cout << "Enter the type of figure (square, rectangle, circle, triangle): ";
    cin >> shape;

    if (shape == "square") {
        double s;
        cin >> s;
        area = s * s; // Area = s^2
    } 
    else if (shape == "rectangle") {
        double l, w;
        cin >> l >> w;
        area = l * w; // Area = l * w
    } 
    else if (shape == "circle") {
        double r;
        cin >> r;
        area = 3.14159 * r * r; // Area = pi * r^2
    } 
    else if (shape == "triangle") {
        double b, h;
        cin >> b >> h;
        area = 0.5 * b * h; // Area = 1/2 * b * h
    }

    cout << area << endl;
    return 0;
}