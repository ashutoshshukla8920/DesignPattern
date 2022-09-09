//
//  Array.hpp
//  CompileTimeStretegy
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef Array_hpp
#define Array_hpp
#include <vector>

template <typename T>
class Array {
    std::vector<T> m_array;
public:
    void add(T value);
    T remove(int pos);
    void insert(T value, int pos);
    T get(int pos);
    size_t size();
};

template <typename T>
void Array<T>::add(T value) {
    m_array.push_back(value);
}

template <typename T>
T Array<T>::remove(int pos) {
    m_array.erase(m_array.begin() + pos);
}

template <typename T>
void Array<T>::insert(T value, int pos) {
    auto itPos = m_array.begin() + pos;
    m_array.insert(itPos, value);
}

template <typename T>
T Array<T>::get(int pos) {
    m_array[pos];
}

template <typename T>
size_t Array<T>::size() {
    m_array.size();
}

#endif /* Array_hpp */
