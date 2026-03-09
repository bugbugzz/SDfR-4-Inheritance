//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this file contains the implementation of the TwoDayPackage class, which represents a two-day package with a flat fee and a price per kilogram.
//=====================...........................=================================

#include "TwoDayPackage.h"

// Constructor that initializes the TwoDayPackage with sender and receiver details, weight, and optional fees
TwoDayPackage::TwoDayPackage(std::string sName, std::string sAddr, std::string rName, std::string rAddr, double w)
    : Package(sName, sAddr, rName, rAddr, w) {}

// Override the calculateCosts method to include the flat fee and price per kilogram for two-day shipping    
double TwoDayPackage::calculateCosts() const {
    return flatFee + (weight * pricePerKg);
}