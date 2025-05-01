//Tommy Scherbauer
//CIS 1202.800
//April 29, 2025

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numOfDoors;

public:
    Car();
    Car(string, int, int);

    void setNumDoors(int);
    int getNumDoors() const;

    void displayInfo() const override;
};

#endif
