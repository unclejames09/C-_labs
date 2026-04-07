#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Task 1 - using setters
    Rectangle r1;
    float l, w;

    cout << "Enter length: "; cin >> l;
    cout << "Enter width: ";  cin >> w;
    r1.setLength(l);
    r1.setWidth(w);
    cout << "Area: " << r1.calculateArea() << endl;

    // Task 2 - using overloaded constructor
    cout << "\nEnter length for second rectangle: "; cin >> l;
    cout << "Enter width for second rectangle: ";  cin >> w;
    Rectangle r2(l, w);
    cout << "Area: " << r2.calculateArea() << endl;

    return 0;
}
