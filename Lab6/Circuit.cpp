//
// Created by Lucian on 3/30/2023.
//

#include <iostream>
#include <cstring>
#include "Circuit.h"


void Circuit::SetLength(int length) {
    this->lungime = length;
}

void Circuit::Race() {
    double carConsumptionOfEntireRace;

    for (int i = 0; i < participantiInscrisi; ++i) {
        carConsumptionOfEntireRace = (pilotiInitiali[i]->fuelCapacity() * 100) / pilotiInitiali[i]->fuelConsumption();
        if (carConsumptionOfEntireRace < this->lungime){
            pilotiCareAuPierdut[i] = pilotiInitiali[i];
            participantiCareAuPierdut++;
        } else{
            pilotiCareAuFinalizat[i] = pilotiInitiali[i];
            participantiCareAuFinalizat++;
        }
    }

    for (int i = 0; i < participantiCareAuFinalizat - 1; ++i) {
        for (int j = i + 1; j < participantiCareAuFinalizat; ++j){
            if (pilotiCareAuFinalizat[i]->averageSpeed(vremeActuala) < pilotiCareAuFinalizat[j]->averageSpeed(vremeActuala)){
                Car* temp = pilotiCareAuFinalizat[i];
                pilotiCareAuFinalizat[i] = pilotiCareAuFinalizat[j];
                pilotiCareAuFinalizat[j] = temp;
            }
        }
    }
}

void Circuit::ShowFinalRanks() {

        std::cout << "In aceasta cursa au finalizat " << participantiCareAuFinalizat << " participanti. Locurile sunt:\n";

        for (int i = 0; i < participantiCareAuFinalizat; i++) {
            std::cout << pilotiCareAuFinalizat[i]->getCarName() << " finalizand pe locul: " << i + 1 << std::endl;
        }
        std::cout<<std::endl;
    }


void Circuit::ShowWhoDidNotFinish() {
    std::cout << "In aceasta cursa " << participantiCareAuPierdut << " n-au finalizat cursa. Masinile sunt:\n";

    for (int i = 0; i < participantiCareAuPierdut; i++) {
        std::cout << pilotiCareAuPierdut[i]->getCarName() << std::endl;
    }
    std::cout<<std::endl;
}

void Circuit::AddCar(Car *car) {

    pilotiInitiali[participantiInscrisi] = car;
    participantiInscrisi ++;

}

void Circuit::SetWeather(Weather weather) {
    this->vremeActuala = weather;
}

Circuit::~Circuit() {
    delete [] pilotiInitiali;
    delete [] pilotiCareAuFinalizat;
    delete [] pilotiCareAuPierdut;
}

Circuit::Circuit() {
    participantiMax = 5;
    pilotiInitiali = new Car*[participantiMax];
    pilotiCareAuPierdut = new Car*[participantiMax];
    pilotiCareAuFinalizat = new Car*[participantiMax];
}
