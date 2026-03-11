//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : This file contains test cases for printing an empty package list, creating a package of the base type and adding a new package to the list.
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

// 3 Test Cases
// 1. Print empty package list
// 2. Create a package of base type
// 3. Add new package type to list

void testEmptyList() {
    std::cout << "\nRunning Test 1" << std::endl;

    // Create a list (vector) of Package pointers
    std::vector<Package*> myPackages;

    //Package list is empty
    printCosts(myPackages);

    // Clean up memory
    for (Package* p : myPackages) {
        delete p;
    }
}

void testBasePackage() {
    std::cout << "\nRunning Test 2" << std::endl;

    // Create a list (vector) of Package pointers
    std::vector<Package*> myPackages;

    //Base package type is selected
    myPackages.push_back(new Package("Alice", "123 Lane", "Bob", "456 Blvd", 5.0));

    printCosts(myPackages);

    // Clean up memory
    for (Package* p : myPackages) {
        delete p;
    }

}

void testAddPackages() {
    std::cout << "\nRunning Test 3" << std::endl;

    // Create a list (vector) of Package pointers
    std::vector<Package*> myPackages;
    
    //Add two packages to list
    myPackages.push_back(new TwoDayPackage("Alice", "123 Lane", "Bob", "456 Blvd", 5.0));
    myPackages.push_back(new OvernightPackage("Charlie", "789 St", "Daisy", "321 Rd", 5.0));

    printCosts(myPackages);

    //Add third package to list
    myPackages.push_back(new TwoDayPackage("George", "987 Avenue", "Lisa", "654 Drive", 7.5));

    printCosts(myPackages);
  
    // Clean up memory
    for (Package* p : myPackages) {
        delete p;
    }
}

//Function to run all tests
void runTests() {
    std::cout << "Running 3 Tests" << std::endl;
    testEmptyList();
    testBasePackage();
    testAddPackages();
    std::cout << "\nAll tests passed successfully" << std::endl;
}

int main() {
    //Run the tests
    runTests();    

    return 0;
}
