#include <iostream>
#include <cstdlib>
#include "Sort.h"

int main() {
    int min = 3;
    int max = 12;
    int length = 7;
    int list[length];

    for(int i = 0; i < length; i++){
        list[i] = min + (rand() % (max - min + 1));
    }

    Sort sort_random(length, min, max);
    sort_random.InsertSort(true);

    sort_random.Print();

    return 0;
}
