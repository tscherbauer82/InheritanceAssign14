//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

//Header file for Vehicle.h

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(string, int);

    void setManufacturer(string);
    string getManufacturer() const;

    void setYearBuilt(int);
    int getYearBuilt() const;

    virtual void displayInfo() const;
};

#endif
