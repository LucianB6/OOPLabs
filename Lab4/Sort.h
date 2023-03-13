//
// Created by Lucian on 3/13/2023.
//

#ifndef LAB4_SORT_H
#define LAB4_SORT_H
#include <vector>

class Sort {
    int *unsorted_list;
    int length;
    int min;
    int max;

public:

    Sort(const int list[], int count);
    ~Sort();
    Sort(int length, int min, int max);
    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};


#endif //LAB4_SORT_H
