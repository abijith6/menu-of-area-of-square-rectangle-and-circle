#include <iostream>
using namespace std;

int main() {
    int choice;
    float area;

    cout << "Area Calculator Menu:\n";
    cout << "1. Area of Square\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Circle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            float side;
            cout << "Enter side length of square: ";
            cin >> side;
            area = side * side;
            cout << "Area of Square = " << area << endl;
            break;
        }
        case 2: {
            float length, width;
            cout << "Enter length and width of rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area << endl;
            break;
        }
        case 3: {
            float radius;
            cout << "Enter radius of circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
