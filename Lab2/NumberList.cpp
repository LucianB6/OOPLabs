//
// Created by Lucian on 2/28/2023.
//


#include "NumberList.h"
#include <cstring>
#include <iostream>

void NumberList::Init() {
    count = 0;
    numbers[count] = 0;
}

bool NumberList::Add(int x) {
    numbers[this->count] += x;
    this->count++;
    if (this->count >= 0)
        return false;
    else
        return true;
}

void NumberList::Sort() {
    int a = 0;
    for (int i = 0; i < this->count; ++i) {
        for (int j = i + 1; j < this->count + 1; ++j) {
            if (numbers[i] > numbers[j]){
                std::swap(numbers[i], numbers[j]);
            }
        }
    }
}

void NumberList::Print() {
    for (int i = 0; i < count; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("Count: %d",count);
}

