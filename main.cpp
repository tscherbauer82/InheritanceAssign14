//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

#include"Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
	string manufacturer;
	int year;
	int doors;
	int towingCapacity;

	//Input from user for manufacturer and year built, stored in Vehicle object
	cout << "Enter Vehicle manufacturer:\n";
	getline(cin, manufacturer);
	cout << "Enter year built: \n";
	cin >> year;
	cin.ignore();
	Vehicle vehicle(manufacturer, year);
	vehicle.displayInfo();
	cout << endl;

	//Input from user for manufacturer and year built, stored in Car object
	cout << "Enter Vehicle manufacturer:\n";
	getline(cin, manufacturer);
	cout << "Enter year built: \n";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	cin.ignore();
	Car car(manufacturer, year, doors);
	car.displayInfo();
	cout << endl;

	//Input from user for manufacturer and year built, stored in Truck object
	cout << "Enter Truck manufacturer:\n";
	getline(cin, manufacturer);
	cout << "Enter year built: \n";
	cin >> year;
	cout << "Enter the towing capacity (in lbs): ";
	cin >> towingCapacity;
	cin.ignore();
	Truck truck(manufacturer, year, towingCapacity);
	truck.displayInfo();
	cout << endl;

	return 0;
}
