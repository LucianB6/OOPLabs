//
// Created by Lucian on 3/6/2023.
//

#ifndef LAB3_MATH_H
#define LAB3_MATH_H

#endif //LAB3_MATH_H

class Math {

public:
    Math();
    static int Add(int, int);
    static int Add(int, int, int);
    static int Add(double, double);
    static int Add(double, double, double);
    static int Mul(int, int);
    static int Mul(int, int, int);
    static int Mul(double, double);
    static int Mul(double, double, double);
    static int Add(int count, ...); // sums up a list of integers
    static char *Add(const char *, const char *);
};