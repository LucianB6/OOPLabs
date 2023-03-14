//
// Created by Lucian on 3/13/2023.
//

#ifndef LAB4_SORT_H
#define LAB4_SORT_H
#include <vector>
#include <initializer_list>

class Sort {
    int *unsorted_list;
    int length;
    int min;
    int max;

public:

    Sort(std::initializer_list<int> list, int counts);
    Sort(int length, int min, int max);
    Sort(int count, ...);
    ~Sort();
    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};


#endif //LAB4_SORT_H
