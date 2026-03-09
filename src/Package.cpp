//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this file contains the implementation of the Package class, which is the base class for different types of packages. It includes a constructor to initialize the package details and a virtual method to calculate costs, which can be overridden by derived classes.
//=====================...........................=================================
#include "Package.h"

// Constructor that initializes the Package with sender and receiver details, weight, and optional fees
Package::Package(std::string sName, std::string sAddr, std::string rName, std::string rAddr, double w)
    : senderName(sName), senderAddress(sAddr), receiverName(rName), receiverAddress(rAddr), weight(w) {}

 // The base version of calculateCosts just returns 0.0, since we expect derived classes to provide their own implementation
double Package::calculateCosts() const {
    return 0.0;
}

