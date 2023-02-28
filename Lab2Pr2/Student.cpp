//
// Created by Lucian on 2/28/2023.
//

#include "Student.h"
#include <string>

Student::Student(const std::string& name, int nota1, int nota2, int nota3) {
    this->name = name;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
}

std::string Student::getName() {
    return name;
}

int Student::getNotaEng() {
    return nota1;
}

int Student::getNotaHistory() {
    return nota3;
}

int Student::getNotaMath() {
    return nota2;
}

float Student::average() const {
    float avg = this->nota1 + this->nota2 + this->nota3;
    avg /= 3;

    return avg;
}

int Student::compareStudent(const Student& s1, const Student& s2) {
    if (s1.average() > s2.average()){
        return 1;
    }
    else if (s1.average() == s2.average()){
        return 0;
    } else return -1;
}

Student::Student() {

}

