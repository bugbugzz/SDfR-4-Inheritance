//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this file contains the implementation of the OvernightPackage class, which represents an overnight package with a flat fee and a price per kilogram.
//=====================...........................=================================

#include "OvernightPackage.h"

// Constructor that initializes the OvernightPackage with sender and receiver details, weight, and optional fees
OvernightPackage::OvernightPackage(std::string sName, std::string sAddr, std::string rName, std::string rAddr, double w)
    : Package(sName, sAddr, rName, rAddr, w) {}

// Override the calculateCosts method to include the flat fee, price per kilogram, and the additional overnight fee based on weight squared
double OvernightPackage::calculateCosts() const {
    double baseCost = flatFee + (weight * pricePerKg); 
    return baseCost + (weight * weight * overnightFeePerKg);
}