//
// Created by Lucian on 3/30/2023.
//

#include "BMW.h"

double BMW::fuelCapacity() {
    return 70;
}

double BMW::fuelConsumption() {
    return 8.2;
}

int BMW::averageSpeed(Weather weather) {
    if (weather == Rain){
        return 130;
    }
    else if (weather == Sunny){
        return 200;
    }
    else if (weather == Snow){
        return 70;
    }
}

const char* BMW::getCarName() {
    return "BMW";
}