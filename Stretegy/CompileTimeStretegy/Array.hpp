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

// Now we can have better implementation , at compiletime programmer knows wether system is single threaded or multithreaded
// implement compiletime polymorphism



class MutexLock {
private:
    std::mutex mutex;
public:
    void lock() {
        mutex.lock();
    }
    void unlock() {
        mutex.unlock();
    }
};

class NoLock {
public:
    void lock() {
    }
    void unlock() {
    }
};

template <typename T, typename LockPolicy = NoLock>
class Array {
    std::vector<T> m_array;
    std::mutex mtx;
    //bool m_IsMultiThreaded;
    LockPolicy lockPolicy;
public:
    void add(T value);
    void remove(int pos);
    void insert(T value, int pos);
    T get(int pos);
    size_t size();
};

template <typename T, typename LockPolicy>
void Array<T, LockPolicy>::add(T value) {
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
//    m_array.push_back(value);
//    if(m_IsMultiThreaded) {
//        mtx.unlock();
//    }
    lockPolicy.lock();
    m_array.push_back(value);
    lockPolicy.unlock();
}

template <typename T, typename LockPolicy>
void Array<T, LockPolicy>::remove(int pos) {
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
//    m_array.erase(m_array.begin() + pos);
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
    lockPolicy.lock();
    m_array.erase(m_array.begin() + pos);
    lockPolicy.unlock();
}

template <typename T, typename LockPolicy>
void Array<T, LockPolicy>::insert(T value, int pos) {
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
//    auto itPos = m_array.begin() + pos;
//    m_array.insert(itPos, value);
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
    lockPolicy.lock();
    auto itPos = m_array.begin() + pos;
    m_array.insert(itPos, value);
    lockPolicy.unlock();
}

template <typename T, typename LockPolicy>
T Array<T, LockPolicy>::get(int pos) {
    return m_array[pos];
}

template <typename T, typename LockPolicy>
size_t Array<T, LockPolicy>::size() {
    return m_array.size();
}

#endif /* Array_hpp */
