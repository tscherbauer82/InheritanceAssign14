//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle() {
	towingCapacity = 0;
}

Truck::Truck(string manufacturer, int year, int towing) : Vehicle(manufacturer, year) {
	towingCapacity = towing;
}

void Truck::setTowingCapacity(int towing) {
	towingCapacity = towing;
}

int Truck::getTowingCapacity() const {
	return towingCapacity;
}

void Truck::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}