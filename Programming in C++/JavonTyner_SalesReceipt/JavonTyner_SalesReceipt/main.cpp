// Javon Tyner
// June 17th, 2023
// Sales Receipt Lab 2

// Produces a sales receipt of purchased food items 


#include <iostream>
#include <iomanip> // for setprecision and fixed
using namespace std;

int main() {
    // Declare variables for food item names
    string item1 = "Apples";
    string item2 = "Ribeye";
    string item3 = "Juice";
    string item4 = "Sandwich";
    string item5 = "Lobster";

    // Declare variables for item prices
    double price1 = 12.95;
    double price2 = 34.13;
    double price3 = 9.32;
    double price4 = 15.18;
    double price5 = 32.99;

    // Declare constant variable for tax percentage
    const double taxPercentage = 0.0925;

    // Calculate subtotal
    double subtotal = price1 + price2 + price3 + price4 + price5;

    // Calculate tax amount
    double taxAmount = subtotal * taxPercentage;

    // Calculate total cost
    double totalCost = subtotal + taxAmount;

    // Display store receipt
    cout << "------- Store Receipt -------" << endl;
    cout << "Item              Price" << endl;
    cout << "---------------------------" << endl;
    cout << setw(15) << left << item1 << " $" << fixed << setprecision(2) << price1 << endl;
    cout << setw(15) << left << item2 << " $" << fixed << setprecision(2) << price2 << endl;
    cout << setw(15) << left << item3 << " $" << fixed << setprecision(2) << price3 << endl;
    cout << setw(15) << left << item4 << " $" << fixed << setprecision(2) << price4 << endl;
    cout << setw(15) << left << item5 << " $" << fixed << setprecision(2) << price5 << endl;
    cout << "---------------------------" << endl;
    cout << "Subtotal:         $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Tax Amount:       $" << fixed << setprecision(2) << taxAmount << endl;
    cout << "Total Cost:       $" << fixed << setprecision(2) << totalCost << endl;

    return 0;
}
