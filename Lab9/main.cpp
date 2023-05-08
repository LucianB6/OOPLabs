#include <bits/stdc++.h>
#include "Map.h"

int main() {
    Map<int, const char *> m;

    m.Set(10, "C++");
    m.Set(20, "test");
    m.Set(30, "Poo");


    for (auto[key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    m.Set(20, "result");

    for (auto[key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    return 0;
}