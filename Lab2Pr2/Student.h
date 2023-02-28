//
// Created by Lucian on 2/28/2023.
//

#ifndef LAB2PR2_STUDENT_H
#define LAB2PR2_STUDENT_H

#include <string>

class Student {
    std::string name;
    int nota1, nota2, nota3;


public:
    Student(const std::string& name, int nota1, int nota2, int nota3);
    Student();
    std::string getName();

    int getNotaEng();
    int getNotaMath();
    int getNotaHistory();

    float average() const;

    int compareStudent(const Student& s1, const Student& s2);
};


#endif //LAB2PR2_2_STUDENT_H
