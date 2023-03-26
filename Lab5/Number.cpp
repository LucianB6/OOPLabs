//
// Created by Lucian on 3/22/2023.
//

#include "Number.h"
#include <cstring>
#include <cmath>


Number::Number(char *number, int base){
    this->number = new char[strlen(number) + 1];
    strcpy(this->number, number);

    this->base = base;
}
char * Number::SwitchBase(int newBase) {
    int len = strlen(this->number);

    if(this->base < 10) {
        for (int i = 0; i < len; ++i) {
            this->number[len - i - 1] *= pow(this->base, i) - '0';
        }
    } else if(this->base > 10){
        for (int i = 0; i < len; ++i) {
            if (this->number[len - 1 - i] > 0 || this->number[len - 1 - i] < 10){

                this->number[len - i - 1] *= pow(this->base, i) - '0';
            }
            switch (number[len - 1 - i]) {
                case 'A':
                    number[len - 1 - i] = 10 * pow(base, i) - '0';
                case 'B':
                    number[len - 1 - i] = 11 * pow(base, i) - '0';
                case 'C':
                    number[len - 1 - i] = 12 * pow(base, i) - '0';
                case 'D':
                    number[len - 1 - i] = 13 * pow(base, i) - '0';
                case 'E':
                    number[len - 1 - i] = 14 * pow(base, i) - '0';
                case 'F':
                    number[len - 1 - i] = 15 * pow(base, i) - '0';
            }
        }
    }
    base = newBase;
}


Number Number::operator+(Number &other) {


int len1 = strlen(number);
int len2 = strlen(other.number);
int maxLen = len1 > len2 ? len1 : len2;


int decimal = 0;
char *number1 = new char [len1 + 1];

for (int i = 0; number[i] != '\0'; i++) {
    if (number[i] == '1') {
        decimal += pow(2, strlen(number) - i - 1);
    }
}


char* sum = new char [maxLen + 1];
int rest;
int suma_cifrelor;


if(sizeof(decimal) - 1 > len2){
    for(int i = 0; i < sizeof(decimal); i++){
        suma_cifrelor = rest;

        if (i < sizeof(decimal)) {
            suma_cifrelor += decimal % 10 - '0';
            decimal /= 10;
        }
        if (i < len2) suma_cifrelor += other.number[len2 - 1 - i] - '0';

        sum[len1 - 1 - i] = suma_cifrelor % 10 + '0';
        rest = suma_cifrelor / 10;

    }
} else {

    for(int i = 0; i < len2; i++){
        suma_cifrelor = rest;

        if (i < len2) suma_cifrelor += other.number[len2 - 1 - i] - '0';
        if (i < sizeof(decimal)) {
            suma_cifrelor += decimal % 10;
            decimal /= 10;
        }

        sum[len2 - 1 - i] = suma_cifrelor % 10 + '0';
        rest = suma_cifrelor / 10;

    }
}
    sum[len1] = NULL;
    Number resultNumber(sum, base);
    delete [] sum;
    return resultNumber;
}


void Number::Print() const{
    std::cout << number << std::endl;
}


int Number::GetBase() const {
    return this->base;
}

int Number::GetDigitsCount() const {
    return strlen(this->number);
}

char Number::operator[](int index) {
    if (index < 0 || index > GetDigitsCount()){
        exit(0);
    } else{
        return this->number[index];
    }
}

bool operator>(Number a, Number b) {
    if (a.number > b.number) {
        return false;
    }
    else return true;
}

Number::Number() {

}

Number::Number(int i) {

}

Number::Number(const char *string) {

}

Number &Number::operator--() {
    strcpy_s(this->number, strlen(this->number), this->number + 1);
    return (*this);
}

Number& Number::operator--(int val)
{
    this->number[strlen(this->number) - 1] = '\0';
    return (*this);
}

Number::~Number() {
    delete [] number;
}















