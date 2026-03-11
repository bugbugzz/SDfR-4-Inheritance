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
    int count = 1; // Start a counter
    for (Package* p : packageList) {
        std::cout << "Package " << count << " - Shipping for " 
                  << p->calculateCosts() << " Euro" << std::endl;
        count++; // Increment for the next package
    }
}

int main() {
    // Create a list (vector) of Package pointers
    std::vector<Package*> myPackages;

    // Hard-code a few packages 
    myPackages.push_back(new TwoDayPackage("Milou", "University Campus", "Shatrunjay", "Student Housing", 4.2));
    myPackages.push_back(new OvernightPackage("Milou", "University Campus", "Shatrunjay", "Student Housing", 5.6));
    myPackages.push_back(new OvernightPackage("Milou", "University Campus", "Shatrunjay", "Student Housing", 6.0));


    // Pass the list to the function
    printCosts(myPackages);

    // Clean up memory 
    for (Package* p : myPackages) {
        delete p;
    }

    return 0;
}