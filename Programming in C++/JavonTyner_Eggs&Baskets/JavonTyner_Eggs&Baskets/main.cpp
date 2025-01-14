// Javon Tyner 
// Lab 5 - Eggs & Baskets 
// June 26th, 2023





#include <iostream>
#include <iomanip>

int main() {
    int totalBaskets;
    int totalWhiteEggs = 0;
    int totalBrownEggs = 0;
    int totalContainersWhite = 0;
    int totalContainersBrown = 0;

    // Get the number of baskets
    std::cout << "Welcome to the egg distribution center!" << std::endl;
    std::cout << "How many baskets are available? ";
    std::cin >> totalBaskets;

    // Error checking for the number of baskets
    while (totalBaskets <= 0) {
        std::cout << "Invalid number of baskets. Please enter a positive number: ";
        std::cin >> totalBaskets;
    }

    // Loop through each basket to ask for white and brown eggs
    for (int i = 1; i <= totalBaskets; ++i) {
        int whiteEggs, brownEggs;

        // Ask for the number of white and brown eggs in each basket
        std::cout << "Basket #" << i << std::endl;
        std::cout << "Number of white eggs: ";
        std::cin >> whiteEggs;

        // Error checking for the number of white eggs
        while (whiteEggs < 0) {
            std::cout << "Invalid number of white eggs. Please enter a non-negative number: ";
            std::cin >> whiteEggs;
        }

        std::cout << "Number of brown eggs: ";
        std::cin >> brownEggs;

        // Error checking for the number of brown eggs
        while (brownEggs < 0) {
            std::cout << "Invalid number of brown eggs. Please enter a non-negative number: ";
            std::cin >> brownEggs;
        }

        // Update the totals
        totalWhiteEggs += whiteEggs;
        totalBrownEggs += brownEggs;

        // Calculate the number of containers
        totalContainersWhite += whiteEggs / 12;
        totalContainersBrown += brownEggs / 12;
    }

    // Calculate the percentages
    double percentageWhite = static_cast<double>(totalWhiteEggs) / (totalWhiteEggs + totalBrownEggs) * 100;
    double percentageBrown = static_cast<double>(totalBrownEggs) / (totalWhiteEggs + totalBrownEggs) * 100;

    // Display the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nDistribution Summary:" << std::endl;
    std::cout << "Total white eggs: " << totalWhiteEggs << std::endl;
    std::cout << "Total brown eggs: " << totalBrownEggs << std::endl;
    std::cout << "Percentage of white eggs: " << percentageWhite << "%" << std::endl;
    std::cout << "Percentage of brown eggs: " << percentageBrown << "%" << std::endl;
    std::cout << "Number of dozen egg containers for white eggs: " << totalContainersWhite << std::endl;
    std::cout << "Number of dozen egg containers for brown eggs: " << totalContainersBrown << std::endl;

    return 0;
}
 