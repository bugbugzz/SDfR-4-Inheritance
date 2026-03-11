//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this file contains the implementation of the Package class, which is the base class for different types of packages.
//=====================...........................=================================

#include "Package.h"

// Constructor that initializes the Package with sender and receiver details, weightz
Package::Package(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, double weight)
    : senderName(senderName), senderAddress(senderAddress), receiverName(receiverName), receiverAddress(receiverAddress), weight(weight) {}

 // The base version of calculateCosts just returns 0
double Package::calculateCosts() const {
    return 0;
}

