//=====================...........................=================================
// Authors : Milou de Zwaan (2629070), Shatrunjay Palkar (3669734)
// Group : 14ppd
// License : LGPL open source license
//
// Brief : this class represents a Package, which has a sender, receiver, weight, and a method to calculate costs. It serves as the base class for different types of packages like TwoDayPackage and OvernightPackage.
//=====================...........................=================================

#ifndef PACKAGE_H
#define PACKAGE_H


#include <string>

class Package
{
protected: // "protected" lets subclasses see these, but keeps them private from the outside
    std::string senderName;
    std::string senderAddress;
    std::string receiverName;
    std::string receiverAddress;
    double weight;
public:
    Package(std::string sName, std::string sAddr, std::string rName, std::string rAddr, double w);
    
    // The "virtual" keyword is the secret sauce for polymorphism!
    virtual double calculateCosts() const; 
    
    virtual ~Package() {} // Always include a virtual destructor for base classes
};

#endif // PACKAGE_H
