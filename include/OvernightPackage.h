//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this class contains the definition of the OvernightPackage.
//=====================...........................=================================
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"
// The OvernightPackage class inherits from the Package class and adds an additional fee based on the weight squared for overnight shipping
class OvernightPackage : public Package {
private:
 // flat fee, price per kilogram, and the additional overnight fee per kilogram defined as constants.
    const double flatFee = 5.0; 
    const double pricePerKg = 2.50;
    const double overnightFeePerKg = 1.10;

    public: //here define the constructor and the new override calculateCosts method
    OvernightPackage(std::string senderName, std::string senderAddress,
                     std::string receiverName, std::string receiverAddress, double weight);

    double calculateCosts() const override; // override the calculateCosts method to include the flat fee, price per kilogram, and the additional overnight fee based on weight squared;
};
#endif