//
// Created by Lucian on 3/6/2023.
//

#include "Math.h"
#include <cstring>
#include <iostream>

int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return a + b;
}

int Math::Add(double a, double b, double c) {
    return a + b + c;
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return a * b;
}

int Math::Mul(double, double, double) {
    return 0;
}

int Math::Add(int count, ...) {
    return 0;
}

char *Math::Add(const char * a, const char * b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    if(len_a == 0 or len_b == 0){
        return nullptr;
    } else {
        char *result = new char[len_a + len_b + 1];
        strcpy(result, a);
        strcat(result, b);

        return result;
    }
}

Math::Math() {
}
