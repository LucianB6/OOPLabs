//
// Created by Lucian on 3/13/2023.
//
#include <bits/stdc++.h>
#include <string>
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

int partition(int arr[], int low, int high, int pivot){
    int PIndex = low;

    for(int i=low;i<=high;i++) {

        if(arr[i]<=pivot) {
            std::swap(arr[PIndex],arr[i]);
            PIndex++;
        }
    }
    PIndex--;

    return PIndex;
}

void Sort::QuickSort(bool ascendent, int i, int j) {

    if(i < j) {
        int pivot = this->unsorted_list[j];

        int PIndex = partition(this->unsorted_list, i, j, pivot);

        QuickSort(this->unsorted_list, i, PIndex - 1);
        QuickSort(this->unsorted_list, PIndex + 1, j);
    }

}


void Sort::BubbleSort(bool ascendent) {
    int i, j;
    int size = GetElementsCount();
    for (i = 0; i < size - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < size - i - 1; j++)
            if (this->unsorted_list[j] > this->unsorted_list[j + 1])
                std::swap(this->unsorted_list[j], this->unsorted_list[j + 1]);
}

void Sort::Print() {
    for (int i = 0; i < GetElementsCount(); i++) {
            std::cout << this->unsorted_list[i] << " ";
    }
    std::cout << std::endl;
}

int Sort::GetElementsCount() {
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
    length = 0;
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

Sort::Sort(std::vector<int> vector, int length) {
    this->length = length;
    this->unsorted_list = new int[this->length];

    for (int i = 0; i < this->length; i++)
        this->unsorted_list[i] = vector[i];
}

Sort::Sort(char * list_string, int length) {
    this->string_list = list_string;
    this->length = length;
    int new_list[this->length];
    char *ptr;

    ptr = strtok(list_string, ",");
    int i = 0;
    while (ptr != NULL){
        this->unsorted_list[i] = atoi(ptr);
        ptr = strtok (NULL, " , ");
        i += 1;
    }

}
