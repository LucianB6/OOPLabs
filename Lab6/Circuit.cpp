//
// Created by Lucian on 3/30/2023.
//

#include "Circuit.h"

Circuit::Circuit() {

}

void Circuit::SetLength(int length) {
    this->lungime = length;
}

void Circuit::Race() {

}

void Circuit::ShowFinalRanks() {

}

void Circuit::ShowWhoDidNotFinish() {

}

void Circuit::AddCar(Car *car) {
    racer[nrParticipanti] = car;
    nrParticipanti ++;
}

void Circuit::SetWeather(Weather weather) {

}

Circuit::~Circuit() {

}
