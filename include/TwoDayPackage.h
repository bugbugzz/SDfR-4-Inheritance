//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this class represents a TwoDayPackage, which is a type of Package that has a flat fee and a price per kilogram. It inherits from the Package class and overrides the calculateCosts method to include the two-day shipping fee.
//=====================...........................=================================
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package {
// Define the flat fee and price per kilogram as static constants for two-day shipping
private:
    static constexpr double flatFee = 5.0; 
    static constexpr double pricePerKg = 2.50;

// The constructor initializes the TwoDayPackage with sender and receiver details, weight, and optional fees. It calls the base class constructor to initialize the common attributes.    
public:
    TwoDayPackage(std::string senderName, std::string senderAddress,
                  std::string receiverName, std::string receiverAddress, double weight);

    double calculateCosts() const override; // override the calculateCosts method to include the flat fee and price per kilogram for two-day shipping
};

#endif