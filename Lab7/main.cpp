#include <bits/stdc++.h>

long double operator""_Kelvin(unsigned long long x){
    return (x - 273.15);
}
long double operator""_Fahrenheit(unsigned long long x){
    return (x-32)/1.8;
}
int main() {

    long double a = 300_Kelvin;
    long double b = 120_Fahrenheit;

    std::cout<< "Conversion to kelvin: " << a << std::endl;
    std::cout<< "Conversion to fahrenheit: " << b << std::endl;

    return 0;

}