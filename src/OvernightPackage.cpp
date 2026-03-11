//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this file contains the implementation of the OvernightPackage class
//=====================...........................=================================

#include "OvernightPackage.h"

// Constructor that initializes the OvernightPackage with sender and receiver details, weight, and optional fees
OvernightPackage::OvernightPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, double weight)
    : Package(senderName, senderAddress, receiverName, receiverAddress, weight) {}

// Override the calculateCosts method to include the flat fee, price per kilogram, and the additional overnight fee based on weight squared
double OvernightPackage::calculateCosts() const {
    double baseCost = flatFee + (weight * pricePerKg); 
    return baseCost + (weight * weight * overnightFeePerKg);
}