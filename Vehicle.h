//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

//Header file for Vehicle.h

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {

	string manufacturer;
	int yearBuilt;

	//setter and getter for Manufacturer
	void setManufacturer(string);
	string getManufacturer();

	//setter and getter for YearBuilt
	void setYearBuilt(int);
	int getYearBuilt();

	void displayInfo();
};

#endif
