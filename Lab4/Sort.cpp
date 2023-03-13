//
// Created by Lucian on 3/13/2023.
//
#include <bits/stdc++.h>

#include "Sort.h"

Sort::Sort(const int list[], int count) {
    for(int i = 0; i <= count; i++){
        *this->unsorted_list = list[i];
    }
}

void Sort::InsertSort(bool ascendent) {
    int i, key, j;
    int size = GetElementsCount();
    for (i = 1; i < size; i++)
    {
        key = this->unsorted_list[i];
        j = i - 1;

        while (j >= 0 && this->unsorted_list[j] > key)
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
    int size = GetElementsCount();
    for (int i = 0; i < size; ++i) {
        std::cout << this->unsorted_list[i] << " ";
    }
}

int Sort::GetElementsCount() {

}

int Sort::GetElementFromIndex(int index) {
    return 0;
}

Sort::Sort(int length, int min, int max) {
    this->length = length;
    this->min = min;
    this->max = max;

    for(int i = 0; i <= length; i++){
        this->unsorted_list[i] = min + (rand() % (max - min + 1));
    }

}

Sort::~Sort() {
    delete[] unsorted_list;
}
