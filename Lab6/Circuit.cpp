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

    Car** pilotiCareAuFinalizatNou = new Car*[participantiCareAuFinalizat];

    for (int i = 0; i < participantiCareAuFinalizat; i++) {
        pilotiCareAuFinalizatNou[i] = pilotiCareAuFinalizat[i];
    }

    for (int i = 0; i < participantiCareAuFinalizat; i++) {
        std::cout << pilotiCareAuFinalizatNou[i]->getCarName() << " finalizand pe locul: " << i + 1 << std::endl;
    }

    delete[] pilotiCareAuFinalizatNou;

    std::cout << std::endl;
}

void Circuit::ShowWhoDidNotFinish() {
    std::cout << "In aceasta cursa " << participantiCareAuPierdut << " n-au finalizat cursa. Masinile sunt:\n";

    for (int i = 0; i < participantiCareAuPierdut; i++) {
        std::cout << pilotiCareAuPierdut[i]->getCarName() << std::endl;
    }
    std::cout<<std::endl;

    if (participantiCareAuPierdut > 0) {
        Car** temp = new Car*[participantiCareAuPierdut];
        for (int i = 0; i < participantiCareAuPierdut; i++) {
            temp[i] = pilotiCareAuPierdut[i];
        }
        delete[] pilotiCareAuPierdut;
        pilotiCareAuPierdut = temp;
    }
}


void Circuit::AddCar(Car *car) {

    if (participantiInscrisi == participantiMax) {
        Car** newList = new Car*[participantiMax * 2];
        std::memcpy(newList, pilotiInitiali, participantiMax * sizeof(Car*));
        delete [] pilotiInitiali;
        pilotiInitiali = newList;

        Car** newFinishList = new Car*[participantiMax * 2];
        std::memcpy(newFinishList, pilotiCareAuFinalizat, participantiMax * sizeof(Car*));
        delete [] pilotiCareAuFinalizat;
        pilotiCareAuFinalizat = newFinishList;

        Car** newLoseList = new Car*[participantiMax * 2];
        std::memcpy(newLoseList, pilotiCareAuPierdut, participantiMax * sizeof(Car*));
        delete [] pilotiCareAuPierdut;
        pilotiCareAuPierdut = newLoseList;

        participantiMax *= 2;
    }

    pilotiInitiali[participantiInscrisi] = car;
    participantiInscrisi++;

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
