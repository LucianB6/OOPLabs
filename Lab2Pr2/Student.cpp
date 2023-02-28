//
// Created by Lucian on 2/28/2023.
//

#include "Student.h"
#include <string>

Student::Student(const std::string& name, float nota1, float nota2, float nota3) {
    this->name = name;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
}

std::string Student::getName() {
    return name;
}

float Student::getNotaEng() {
    return nota1;
}

float Student::getNotaHistory() {
    return nota3;
}

float Student::getNotaMath() {
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

