//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towingCapacity;

public:
	Truck();
	Truck(string, int, int);

	void setTowingCapacity(int);
	int getTowingCapacity() const;

	void displayInfo() const override;
};

#endif
