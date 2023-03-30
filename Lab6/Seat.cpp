//
// Created by Lucian on 3/30/2023.
//

#include "Seat.h"

double Seat::fuelCapacity() {
    return 60;
}

double Seat::fuelConsumption() {
    return 4.3;
}

int Seat::averageSpeed(Weather weather) {
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

const char* Seat::getCarName() {
    return "Seat";
}