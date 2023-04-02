//
// Created by Lucian on 3/30/2023.
//

#include "Fiat.h"

double Fiat::fuelCapacity() const {
    return 40;
}

double Fiat::fuelConsumption() const{
    return 6.2;
}

int Fiat::averageSpeed(Weather weather) const{
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

const char* Fiat::getCarName() const{
    return "Fiat";
}