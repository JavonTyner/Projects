// Javon Tyner
// Lab 4 - Making Decisions
// June 23rd, 2024




#include <iostream>
#include <iomanip>

// Constants for commission rates and minimum wage
const double COMMISSION_RATE_1 = 0.02;  // 2% commission rate
const double COMMISSION_RATE_2 = 0.03;  // 3% commission rate
const double COMMISSION_RATE_3 = 0.04;  // 4% commission rate
const double COMMISSION_RATE_4 = 0.05;  // 5% commission rate
const double MINIMUM_WAGE = 18.00;      // Minimum wage per hour
const double OVERTIME_MULTIPLIER = 1.5; // Overtime pay multiplier

int main() {
    // Tell the user what the program does
    std::cout << "This program calculates the salary of employees for a retail store.\n";

    // Get the hours worked
    double hours_worked;
    std::cout << "Enter the number of hours worked: ";
    std::cin >> hours_worked;

    // Error checking for hours worked
    if (hours_worked < 0) {
        std::cout << "Invalid input. Hours worked cannot be negative.\n";
        return 1;
    }

    // Get the sales amount
    double sales_amount;
    std::cout << "Enter the sales amount: ";
    std::cin >> sales_amount;

    // Error checking for sales amount
    if (sales_amount < 0) {
        std::cout << "Invalid input. Sales amount cannot be negative.\n";
        return 1;
    }

    // Calculate minimum weekly wage (including overtime if applicable)
    double minimum_wage = hours_worked <= 40 ? hours_worked * MINIMUM_WAGE : 40 * MINIMUM_WAGE + (hours_worked - 40) * MINIMUM_WAGE * OVERTIME_MULTIPLIER;

    // Calculate commission percentage
    double commission_percentage;
    if (sales_amount < 5000)
        commission_percentage = COMMISSION_RATE_1;
    else if (sales_amount < 10000)
        commission_percentage = COMMISSION_RATE_2;
    else if (sales_amount < 20000)
        commission_percentage = COMMISSION_RATE_3;
    else
        commission_percentage = COMMISSION_RATE_4;

    // Calculate commission amount
    double commission_amount = sales_amount * commission_percentage;

    // Calculate paycheck amount (greater of commission or minimum wage)
    double paycheck_amount = commission_amount > minimum_wage ? commission_amount : minimum_wage;

    // Display the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Minimum wages (including overtime): $" << minimum_wage << std::endl;
    std::cout << "Commission amount: $" << commission_amount << std::endl;
    std::cout << "Paycheck amount: $" << paycheck_amount << std::endl;

    return 0;
}
