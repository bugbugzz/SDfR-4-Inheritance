//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this file contains the implementation of the TwoDayPackage class.
//=====================...........................=================================

#include "TwoDayPackage.h"

// Constructor that initializes the TwoDayPackage with sender and receiver details, weight
TwoDayPackage::TwoDayPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, double weight)
    : Package(senderName, senderAddress, receiverName, receiverAddress, weight) {}

// Override the calculateCosts method to include the flat fee and price per kilogram for two-day shipping    
double TwoDayPackage::calculateCosts() const {
    return flatFee + (weight * pricePerKg);
}