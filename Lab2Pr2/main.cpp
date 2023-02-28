#include <iostream>
#include "Student.h"

int main() {

    Student student1("Ionel Dan", 6, 9, 5);
    Student student2("Dan", 6, 7, 8);
    Student student;
    std::cout << "Numele este: " << student1.getName() << " cu media: " << student1.average() << std::endl;
    std::cout << "Numele este: " << student2.getName() << " cu media: " << student2.average() << std::endl;

    int valoare = student.compareStudent(student1, student2);
    std::cout << valoare;

    return 0;
}
