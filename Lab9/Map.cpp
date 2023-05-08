//
// Created by Lucian on 5/8/2023.
//

#include <tuple>
#include "Map.h"
#include <bits/stdc++.h>

template<typename K, typename V>
void Map<K, V>::Set(const K &key, const V &value) {
    if (length < SIZE){
        length += 1;

        key_[length] = key;
        value_[length] = value;
    }
}

template<typename K, typename V>
bool Map<K, V>::Get(const K &key, V &value) const {
    for (int i = 0; i < length; ++i) {
        if (key_[i] == key){
            value_[key] = value;
            return true;
        }
    }
    return false;
}

template<typename K, typename V>
Map<K, V>::Map() {
    length = 0;
}

template<typename K, typename V>
int Map<K, V>::Count() {
    return length;
}

template<typename K, typename V>
void Map<K, V>::Clear() {
    length = 0;
}
/*
1 : value
2 : value2
3 : value 3
k[2] == 2 good
3->2 value 3 -> value2
*/

template<typename K, typename V>
bool Map<K, V>::Delete(const K &key) {
    for (int i = 0; i < length; ++i) {
        if (key_[i] == key){
            for (int j = i + 1; j <= length; ++j) {
                key_[j - 1] = key_[j];
                value_[j - 1] = value_[j];
            }
            return true;
        }
    }
    return false;
}


