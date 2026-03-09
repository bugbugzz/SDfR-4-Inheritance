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
private:
    static constexpr double flatFee = 5.0; 
    static constexpr double pricePerKg = 2.50;

public:
    TwoDayPackage(std::string sName, std::string sAddr, 
                  std::string rName, std::string rAddr, double w);

    double calculateCosts() const override;
};

#endif