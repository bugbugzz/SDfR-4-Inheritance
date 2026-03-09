//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14
// License : LGPL open source license
//
// Brief : this class represents an OvernightPackage, which is a type of Package that has an additional fee based on the weight squared. It inherits from the Package class and overrides the calculateCosts method to include the overnight fee.
//=====================...........................=================================
// ... (Authors/License info)
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
private:
    static constexpr double flatFee = 5.0; 
    static constexpr double pricePerKg = 2.50;
    static constexpr double overnightFeePerKg = 1.10;

public:
    OvernightPackage(std::string sName, std::string sAddr, 
                     std::string rName, std::string rAddr, double w); // End with ;

    double calculateCosts() const override; // End with ;
};

#endif