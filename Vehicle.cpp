//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

//Implementation file for Vehicle.h

#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() {
    manufacturer = "";
    yearBuilt = 0;
}

Vehicle::Vehicle(string m, int year) {
    manufacturer = m;
    yearBuilt = year;
}

void Vehicle::setManufacturer(string m) {
    manufacturer = m;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setYearBuilt(int year) {
    yearBuilt = year;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Vehicle Information:\n";
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}
