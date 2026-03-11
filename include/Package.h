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
    Package(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, double weight);
    
    // The calculateCosts method is declared as virtual, allowing derived classes to provide their own implementation for calculating shipping costs based on their specific rules.
    virtual double calculateCosts() const; 
    // virtual destructor in the base class ensures that both the derived and base class destructors are called, safely releasing all resources.
    virtual ~Package(){};
};

#endif // PACKAGE_H
