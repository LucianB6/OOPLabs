#include <iostream>
#include "NumberList.h"

int main() {
    NumberList a;

    a.Init();
    a.Add(7);
    a.Add(4);

    a.Sort();
    a.Print();
}
