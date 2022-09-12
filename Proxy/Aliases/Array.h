//
//  Array.h
//  Proxy
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef Array_h
#define Array_h

#include <iostream>
#include <vector>
#include <mutex>

template <typename T>
class Array {
    std::vector<T>v;
public:
    void add(T val) {
        v.push_back(val);
    }
    T remove(int pos) {
        T erased = v[pos];
        v.erase(v.begin() + pos);
        return erased;
    }
    void insert(T val, int pos) {
        auto itPos = v.begin() + pos;
        auto newIt = v.insert(itPos, val);
    }
    T get(int pos) {
        return v[pos];
    }
    int size() {
        return v.size();
    }
};
//Protection Proxy
template <typename T>
class ConcurrentArray{
    Array<T> v;
    std::mutex m_Mtx;
public:
    void add(T val) {
        std::lock_guard<std::mutex> lock{ m_Mtx };
        v.add(val);
    }
    T remove(int pos) {
        std::lock_guard<std::mutex> lock{ m_Mtx };
        return v.remove(pos);
    }
    void insert(T val, int pos) {
        std::lock_guard<std::mutex> lock{ m_Mtx };
        v.insert(val, pos);
    }
    T get(int pos) {
        std::lock_guard<std::mutex> lock{ m_Mtx };
        return v.get(pos);
    }
    int size() {
        std::lock_guard<std::mutex> lock{ m_Mtx };
        return v.size();
    }
};


#endif /* Array_h */
