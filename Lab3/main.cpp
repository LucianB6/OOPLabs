#include <iostream>
#include "Math.h"

int main() {


    Math math = Math();


    printf("Suma a doua numere este: %d \n", math.Add(2, 4));
    printf("Suma a trei numere este: %d \n", math.Add(5, 3, 2));
    printf("Suma a doua numere intregi: %d \n", math.Add(2.3, 3.5));
    printf("Inmutirea a doua numere este: %d \n", math.Mul(5, 3));
    printf("Adunarea a doua stringuri este: %s \n", math.Add("Primul elem", ", Al doilea elem"));

}
