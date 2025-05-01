//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : Vehicle() {
    numOfDoors = 0;
}

Car::Car(string m, int y, int d) : Vehicle(m, y) {
    numOfDoors = d;
}

void Car::setNumDoors(int d) {
    numOfDoors = d;
}

int Car::getNumDoors() const {
    return numOfDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numOfDoors << endl;
}