#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor with one argument (square)
    Rectangle(int side) {
        length = side;
        width = side;
    }

    // Parameterized constructor with two arguments (rectangle)
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    int area() const {
        return length * width;
    }

    // Display dimensions
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1;           // Calls default constructor
    Rectangle rect2(5);        // Calls constructor with one argument
    Rectangle rect3(4, 6);     // Calls constructor with two arguments

    cout << "Rectangle 1: ";
    rect1.display();
    cout << "Area: " << rect1.area() << endl;

    cout << "\nRectangle 2 (Square): ";
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    cout << "\nRectangle 3: ";
    rect3.display();
    cout << "Area: " << rect3.area() << endl;

    return 0;
}
