//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this class represents an OvernightPackage, which is a type of Package that has an additional fee based on the weight squared. It inherits from the Package class and overrides the calculateCosts method to include the overnight fee.
//=====================...........................=================================
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"
// The OvernightPackage class inherits from the Package class and adds an additional fee based on the weight squared for overnight shipping
class OvernightPackage : public Package {
private:
 // Define the flat fee, price per kilogram, and the additional overnight fee per kilogram as static constants
    static constexpr double flatFee = 5.0; 
    static constexpr double pricePerKg = 2.50;
    static constexpr double overnightFeePerKg = 1.10;

// The constructor initializes the OvernightPackage with sender and receiver details, weight, and optional fees. It calls the base class constructor to initialize the common attributes.
public:
    OvernightPackage(std::string senderName, std::string senderAddress,
                     std::string receiverName, std::string receiverAddress, double weight);

    double calculateCosts() const override; // override the calculateCosts method to include the flat fee, price per kilogram, and the additional overnight fee based on weight squared;
};

#endif