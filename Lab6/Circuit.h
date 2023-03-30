//
// Created by Lucian on 3/30/2023.
//

#ifndef LAB6_CIRCUIT_H
#define LAB6_CIRCUIT_H


#include "Car.h"

class Circuit {
    int nrParticipanti;
    Car** racer;
    int lungime;

public:
    Circuit();
    ~Circuit();
    void SetLength(int length);

    void SetWeather(Weather weather);

    void AddCar(Car* car);

    void Race();

    void ShowFinalRanks();

    void ShowWhoDidNotFinish();
};


#endif //LAB6_CIRCUIT_H
