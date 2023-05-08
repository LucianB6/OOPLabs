//
// Created by Lucian on 5/8/2023.
//

#ifndef LAB9_MAP_H
#define LAB9_MAP_H

#include <bits/stdc++.h>

#define SIZE 20

template<typename K, typename V>
class Map {
    int index[SIZE];


    K key_[SIZE];
    V value_[SIZE];

    int length;

public:
    Map();
    void Set(const K &key, const V &value);
    bool Get(const K& key, V& value) const;

    int Count();
    void Clear();
    bool Delete(const K& key);

    class Iterator {
        friend class Map;

        const Map& map_;
        int current_index_;

        Iterator(const Map& map, int current_index)
                : map_(map), current_index_(current_index) {}

    public:
        Iterator& operator++() {
            ++current_index_;
            return *this;
        }

        bool operator!=(const Iterator& other) const {
            return current_index_ != other.current_index_;
        }

        std::tuple<K, V, int> operator*() const {
            return std::make_tuple(map_.key_[current_index_], map_.value_[current_index_], current_index_);
        }
    };

public:
    // ...

    Iterator begin() const {
        return Iterator(*this, 0);
    }

    Iterator end() const {
        return Iterator(*this, length);
    }
};



#endif //LAB9_MAP_H
