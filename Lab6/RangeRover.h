//
// Created by Lucian on 3/30/2023.
//

#ifndef LAB6_RANGEROVER_H
#define LAB6_RANGEROVER_H


#include "Car.h"

class RangeRover: public Car{

public:
    double fuelCapacity() const override;
    double fuelConsumption() const override;
    int averageSpeed(Weather weather) const override;
    const char* getCarName() const override;
};


#endif //LAB6_RANGEROVER_H
