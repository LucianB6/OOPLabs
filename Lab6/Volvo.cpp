//
// Created by Lucian on 3/30/2023.
//

#include "Volvo.h"

double Volvo::fuelCapacity() {
    return 40;
}

double Volvo::fuelConsumption() {
    return 6.2;
}

int Volvo::averageSpeed(Weather weather) {
    if (weather == Rain){
        return 160;
    }
    else if (weather == Sunny){
        return 190;
    }
    else if (weather == Snow){
        return 100;
    }
}

const char* Volvo::getCarName() {
    return "Volvo";
}