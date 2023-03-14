//
// Created by Lucian on 3/13/2023.
//
#include <bits/stdc++.h>

#include "Sort.h"

Sort::Sort(std::initializer_list<int> list, int length) {

    this->unsorted_list = new int[length];
    this->length = length;
    int i = 0;

    for (int x : list) {
        this->unsorted_list[i] = x;
        i += 1;
    }
}

void Sort::InsertSort(bool ascendent) {
    int i, key, j;
    int size = GetElementsCount();
    for (i = 1; i < size; i++)
    {
        key = this->unsorted_list[i];
        j = i - 1;

        while (ascendent && j >= 0 && this->unsorted_list[j] > key)
        {
            this->unsorted_list[j + 1] = this->unsorted_list[j];
            j = j - 1;
        }
        this->unsorted_list[j + 1] = key;
    }
}

void Sort::QuickSort(bool ascendent) {

}

void Sort::BubbleSort(bool ascendent) {

}

void Sort::Print() {
    for (int i = 0; i < GetElementsCount(); i++) {
            std::cout << this->unsorted_list[i] << " ";
    }
    std::cout << std::endl;
}

int Sort::GetElementsCount() {
//    int count = 0;
//    for (int i = 0; ; ++i) {
//        count += 1;
//        if (this->unsorted_list[i] != NULL){
//            break;
//        }
//    }
//
//    return count - 1;

    return this->length;
}

int Sort::GetElementFromIndex(int index) {
    return 0;
}

Sort::Sort(int length, int min, int max) {

    this->unsorted_list = new int[length];
    this->length = length;

    this->min = min;
    this->max = max;

    for(int i = 0; i < length; i++){
        this->unsorted_list[i] = min + (rand() % (max - min + 1));
    }

}


Sort::~Sort() {
    delete[] unsorted_list;
}

Sort::Sort(int count, ...) {
    this->length = count;
    this->unsorted_list = new int[this->length];


    va_list vaList;
    va_start(vaList, this->length);

    for (int i = 0; i < this->length; ++i) {
        this->unsorted_list[i] = va_arg(vaList, int);
    }
}
