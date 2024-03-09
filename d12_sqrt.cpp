#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the square root
    double squareRoot = sqrt(number);

    // Display the result
    cout << "Square root of " << number << " is: " << squareRoot << endl;

    return 0;
}
