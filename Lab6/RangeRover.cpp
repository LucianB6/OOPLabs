//
// Created by Lucian on 3/30/2023.
//

#include "RangeRover.h"


double RangeRover::fuelCapacity() const{
    return 60;
}

double RangeRover::fuelConsumption() const{
    return 4.3;
}

int RangeRover::averageSpeed(Weather weather) const{
    if (weather == Rain){
        return 140;
    }
    else if (weather == Sunny){
        return 180;
    }
    else if (weather == Snow){
        return 80;
    }
}

const char* RangeRover::getCarName() const{
    return "RangeRover";
}