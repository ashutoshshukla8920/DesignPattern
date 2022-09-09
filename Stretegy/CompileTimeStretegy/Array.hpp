//
//  Array.hpp
//  CompileTimeStretegy
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef Array_hpp
#define Array_hpp
#include <vector>
#include <mutex>

template <typename T>
class Array {
    std::vector<T> m_array;
    std::mutex mtx;
public:
    void add(T value);
    void remove(int pos);
    void insert(T value, int pos);
    T get(int pos);
    size_t size();
};

template <typename T>
void Array<T>::add(T value) {
    mtx.lock();
    m_array.push_back(value);
    mtx.unlock();
}

template <typename T>
void Array<T>::remove(int pos) {
    mtx.lock();
    m_array.erase(m_array.begin() + pos);
    mtx.unlock();
}

template <typename T>
void Array<T>::insert(T value, int pos) {
    mtx.lock();
    auto itPos = m_array.begin() + pos;
    m_array.insert(itPos, value);
    mtx.unlock();
}

template <typename T>
T Array<T>::get(int pos) {
    return m_array[pos];
}

template <typename T>
size_t Array<T>::size() {
    return m_array.size();
    
}

#endif /* Array_hpp */
