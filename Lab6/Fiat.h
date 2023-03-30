//
// Created by Lucian on 3/30/2023.
//

#ifndef LAB6_FIAT_H
#define LAB6_FIAT_H

#include "Car.h"

class Fiat: public Car{

public:
    double fuelCapacity() override = 0;
    double fuelConsumption() override = 0;
    int averageSpeed(Weather weather) override = 0;
    const char* getCarName() override = 0;
};


#endif //LAB6_FIAT_H
