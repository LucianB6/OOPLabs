//
// Created by Lucian on 2/28/2023.
//

#ifndef LAB2PR2_STUDENT_H
#define LAB2PR2_STUDENT_H

#include <string>

class Student {
    std::string name;
    float nota1, nota2, nota3;


public:
    Student(const std::string& name, float nota1, float nota2, float nota3);
    Student();
    std::string getName();

    float getNotaEng();
    float getNotaMath();
    float getNotaHistory();

    float average() const;

    int compareStudent(const Student& s1, const Student& s2);
};


#endif //LAB2PR2_2_STUDENT_H
