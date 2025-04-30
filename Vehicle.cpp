//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

//Implementation file for Vehicle.h

#include "Vehicle.h"
#include <iostream>
using namespace std;

void Vehicle::setManufacturer(string manufacturer) {
	manufacturer = manufacturer;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

void Vehicle::setYearBuilt(int year) {
	yearBuilt = year;
}

int Vehicle::getYearBuilt() {
	return yearBuilt;
}

void Vehicle::displayInfo() {
	cout << manufacturer << endl;
	cout << yearBuilt << endl;
}
