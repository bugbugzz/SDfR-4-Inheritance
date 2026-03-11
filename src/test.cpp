//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : This file contains test cases
//=====================...........................=================================

#include <iostream>
#include <vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

//this function takes a list of Package pointers and prints the cost for each package
void printCosts(const std::vector<Package*>& packageList) {
    for (Package* p : packageList) {
        std::cout << "Shipping for " << p->calculateCosts() << " Euro" << std::endl;
    }
}

//1. Print empty package list
//2. Add new package type to list

void testEmptyList() {
  std::vector<Package*> myPackages;

  printCosts(myPackages);

  for (Package* : mtPackages) {
    delete p;
  }
}

void testAddPackages() {
  std::vector<Package*> myPackages;
  
  myPackages.push_back(new TwoDayPackage("Alice", "123 Lane", "Bob", "456 Blvd", 5.0));
  myPackages.push_back(new OvernightPackage("Charlie", "789 St", "Daisy", "321 Rd", 5.0));

  printCosts(myPackages);

  myPackages.push_back(new TwoDayPackage("George", "987 Avenue", "Lisa", "654 Drive", 7.5));

  printCosts(myPackages);
  
  for (Package* p : myPackages) {
        delete p;
  }
}

void runTests() {
  std::cout << "Running 2 Tests" << std::endl;
  testEmptyList();
  testAddList();
  std::cout << "All tests passed successfully" << std::endl;
}

int main() {
  
    runTests();    

    return 0;
}
