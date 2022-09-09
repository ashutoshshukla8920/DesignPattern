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

// Program should run in both single or multi threaded application
// in single threaded we should not use mutex
template <typename T>
class Array {
    std::vector<T> m_array;
    std::mutex mtx;
    bool m_IsMultiThreaded;
public:
    Array(bool th) : m_IsMultiThreaded(th) { // constructor is always threadsafe
        
    }
    void add(T value);
    void remove(int pos);
    void insert(T value, int pos);
    T get(int pos);
    size_t size();
};

template <typename T>
void Array<T>::add(T value) {
    if(m_IsMultiThreaded) {
        mtx.lock();
    }
    m_array.push_back(value);
    if(m_IsMultiThreaded) {
        mtx.unlock();
    }
}

template <typename T>
void Array<T>::remove(int pos) {
    if(m_IsMultiThreaded) {
        mtx.lock();
    }
    m_array.erase(m_array.begin() + pos);
    if(m_IsMultiThreaded) {
        mtx.lock();
    }
}

template <typename T>
void Array<T>::insert(T value, int pos) {
    if(m_IsMultiThreaded) {
        mtx.lock();
    }
    auto itPos = m_array.begin() + pos;
    m_array.insert(itPos, value);
    if(m_IsMultiThreaded) {
        mtx.lock();
    }
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
