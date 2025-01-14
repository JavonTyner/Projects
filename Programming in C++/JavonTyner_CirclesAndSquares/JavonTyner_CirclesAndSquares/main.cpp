#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14159265358979;

int main() {
    // Display program information to the user
    std::cout << "Squares in Circle Calculator" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "This program calculates how many squares can fit in a circle." << std::endl;

    // Declare variables
    double sideOfSquare, diameterOfCircle;

    // Ask the user for input
    std::cout << "Enter the side length of the square: ";
    std::cin >> sideOfSquare;

    std::cout << "Enter the diameter of the circle: ";
    std::cin >> diameterOfCircle;

    // Calculate the number of squares that can fit in the circle
    double radiusOfCircle = diameterOfCircle / 2.0;
    double areaOfSquare = sideOfSquare * sideOfSquare;
    double areaOfCircle = PI * radiusOfCircle * radiusOfCircle;
    double numberOfSquares = areaOfCircle / areaOfSquare;

    // Display the result to the user
    std::cout << "Number of squares that can fit in the circle: ";
    std::cout << std::fixed << std::setprecision(2) << numberOfSquares << std::endl;

    return 0;
}
