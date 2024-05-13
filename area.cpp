#include <iostream>
using namespace std;

class Wall {
private:
    float length;
    float height;
public:
    // Parameterized constructor
    Wall(float l, float h) {
        length = l;
        height = h;
    }

    float calculateArea() {
        return length * height;
    }
};

int main() {
    float length, height;
    cout << "Enter the length of the wall: ";
    cin >> length;
    cout << "Enter the height of the wall: ";
    cin >> height;

    // Creating Wall object with parameterized constructor
    Wall wall(length, height);

    // Calculating and displaying the area
    float area = wall.calculateArea();
    cout << "The area of the wall is: " << area << " square units." << endl;

    return 0;
}
