//
// Created by Lucian on 3/30/2023.
//

#ifndef LAB6_CAR_H
#define LAB6_CAR_H

#include "Weather.h"
//fuel capacity, fuel consumption, average speed on different conditions (Rain, Sunny, Snow
class Car {
public:
    virtual double fuelCapacity() const = 0;
    virtual double fuelConsumption() const = 0;
    virtual int averageSpeed(Weather weather) const = 0;
    virtual const char* getCarName() const = 0;

};


#endif //LAB6_CAR_H
