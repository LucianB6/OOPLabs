#include <iostream>
#include "Student.h"

int main() {

    Student student1("Dan", 6.3, 9.2, 5.5);
    Student student2("Dan", 6, 7.5, 8.4);
    Student student;

    std::cout << "Numele este: " << student1.getName() << " cu media: " << student1.average() << std::endl;
    std::cout << "Numele este: " << student2.getName() << " cu media: " << student2.average() << std::endl;

    int valoare = student.compareStudentbyAvg(student1, student2);
    int raspuns = student.compareStudentbyName(student1, student2);
    std::cout << valoare << std::endl;
    std::cout << raspuns;

    return 0;
}
