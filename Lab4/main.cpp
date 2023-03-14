#include <iostream>
#include <cstdlib>
#include "Sort.h"
#include <initializer_list>
#include <cstdio>
#include <cstring>
#include <cstdarg>
#include <vector>


int size(std::initializer_list<int> list) {
    int i = 0;
    for (int x : list) {
        i += 1;
    }
    return i;
}

int main() {
    int min = 3;
    int max = 12;
    int length = 7;
    int list[length];
    char lista_string[] = "10,23,321,11,42";

    std::vector<int> vector_list = {1, 5, 2, 4, 9};

    int initialized_list[] = {2, 3, 4, 1, 5, 10, 7};


    for(int i = 0; i < length; i++){
        list[i] = min + (rand() % (max - min + 1));
    }



    std::initializer_list<int> initializer_list = {4, 2, 3, 8, 10, 2};
    int lungime = size(initializer_list);

    Sort sort_init(initializer_list, lungime);
    sort_init.InsertSort(true);
    sort_init.Print();

    Sort sort_random(length, min, max);
    sort_random.InsertSort(true);
    sort_random.Print();

    Sort variadic(lungime, 4, 2, 3, 8, 10, 2);
    variadic.InsertSort(true);
    variadic.Print();

    Sort vector(vector_list, vector_list.size());
    vector.InsertSort(true);
    vector.Print();

    Sort char_list(lista_string, 5);
    char_list.QuickSort(true, 0, 4);
    char_list.Print();



    return 0;
}
