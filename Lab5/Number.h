//
// Created by Lucian on 3/22/2023.
//

#ifndef LAB5_NUMBER_H
#define LAB5_NUMBER_H
#include <iostream>
using namespace std;

class Number{

private:
    char* number;
    int base;
//public:
//
//   Number(char* value, int base); // where base is between 2 and 16
//   Number(char* value); // where base is between 2 and 16
//
//    ~Number();
//   char operator[](int index);
//   char operator += (Number i);
//   friend char operator-(const Number& a,const Number& b);
//   Number operator+(const Number& other);
////   friend bool operator>(const char* a, const char* b);
//   void SwitchBase(int newBase);
//   void Print();
//   int  GetDigitsCount(); // returns the number of digits for the current number
//
//    Number(int i);

public:
    Number();
    Number(char* number, int base);
    Number operator+(Number &other);
    int  GetDigitsCount() const; // returns the number of digits for the current number
    char operator[](int index);
    int  GetBase() const; // returns the current base
    char * SwitchBase(int newBase);
    friend bool operator>(Number a, Number b);
    void Print() const;
    Number& operator+=(Number nr2);
    Number& operator--();
    Number& operator--(int val);

    Number(int i);

    Number(const char string[6]);

    ~Number();

};
#endif //LAB5_NUMBER_H
