//
// Created by Lucian on 2/28/2023.
//

#include "Student.h"
#include <string>
#include <cstring>

Student::Student(const char *name, float nota1, float nota2, float nota3) {
    this->name = (const char *) name;
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

int Student::compareStudentbyAvg(const Student& s1, const Student& s2) {
    if (s1.average() > s2.average()){
        return 1;
    }
    else if (s1.average() == s2.average()){
        return 0;
    } else return -1;
}

Student::Student() {

}

int Student::compareStudentbyE(const Student &s1, const Student &s2) {
    if (s1.nota1 > s2.nota1){
        return 1;
    }
    else if (s1.nota1 == s2.nota1){
        return 0;
    } else return -1;
}

int Student::compareStudentbyH(const Student &s1, const Student &s2) {
    if (s1.nota2 > s2.nota2){
        return 1;
    }
    else if (s1.nota2 == s2.nota2){
        return 0;
    } else return -1;
}

int Student::compareStudentbyM(const Student &s1, const Student &s2) {
    if (s1.nota3 > s2.nota3){
        return 1;
    }
    else if (s1.nota3 == s2.nota3){
        return 0;
    } else return -1;
}

int Student::compareStudentbyName(const Student& s1, const Student &s2) {
    if (strcmp(s1.name, s2.name) != 0){
        return 1;
    }
    else{
        return 0;
    }
}

