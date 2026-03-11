//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this is the main file that creates a list of Package pointers, populates it with TwoDayPackage and OvernightPackage objects, and then calls a function to print the costs of each package. It also handles memory cleanup at the end.
//=====================...........................=================================

#include <iostream>
#include <vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

//this function takes a list of Package pointers and prints the cost for each package
void printCosts(const std::vector<Package*>& packageList) {
 if (!packageList.empty()) //Check if list is empty
    {
        std::cout << "\nCost:" << std::endl;
        for (Package* p : packageList) {
        std::cout << "Shipping for " << p->calculateCosts() << " Euro" << std::endl;
        }
    }
    else
    {
        std::cout << "No packages!" << std::endl;
    }
}

int main() {
    // Create a list (vector) of Package pointers
    std::vector<Package*> myPackages;

    // Hard-code a few packages
    myPackages.push_back(new TwoDayPackage("Alice", "123 Lane", "Bob", "456 Blvd", 5.0));
    myPackages.push_back(new OvernightPackage("Charlie", "789 St", "Daisy", "321 Rd", 5.0));

    // Pass the list to the function
    printCosts(myPackages);

    // Clean up memory
    for (Package* p : myPackages) {
        delete p;
    }

    return 0;
}
