#include <iostream>
using namespace std;

int main() {
    double width, height;

    // Prompt user for input
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // Calculate perimeter
    double perimeter = 2 * (width + height);

    // Display result
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}
