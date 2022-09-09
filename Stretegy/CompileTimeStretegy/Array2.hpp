//
//  Array2.hpp
//  CompileTimeStretegy
//
//  Created by Ashutosh Shukla on 10/09/22.
//

#ifndef Array2_hpp
#define Array2_hpp

#include <vector>
#include <mutex>

// Program should run in both single or multi threaded application
// in single threaded we should not use mutex

class LockPolicy {
public:
    virtual void lock() = 0;
    virtual void unlock() = 0;
};

class MutexLock : public LockPolicy {
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

class NoLock : public LockPolicy {
public:
    void lock() {
    }
    void unlock() {
    }
};

template <typename T>
class Array {
    std::vector<T> m_array;
    std::mutex mtx;
    //bool m_IsMultiThreaded;
    LockPolicy *lockPtr;
public:
    // what if user passes accidently nullptr, check in constructor, if null we can thow exception
    // or create NoLock by default, but here lockPtr is pointer, who will delete the lockpolicy
    // this will create object on heap
    Array(LockPolicy* th) : lockPtr(th) { // constructor is always threadsafe
        
    }
    void add(T value);
    void remove(int pos);
    void insert(T value, int pos);
    T get(int pos);
    size_t size();
};

template <typename T>
void Array<T>::add(T value) {
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
//    m_array.push_back(value);
//    if(m_IsMultiThreaded) {
//        mtx.unlock();
//    }
    lockPtr->lock();
    m_array.push_back(value);
    lockPtr->unlock();
}

template <typename T>
void Array<T>::remove(int pos) {
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
//    m_array.erase(m_array.begin() + pos);
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
    lockPtr->lock();
    m_array.erase(m_array.begin() + pos);
    lockPtr->unlock();
}

template <typename T>
void Array<T>::insert(T value, int pos) {
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
//    auto itPos = m_array.begin() + pos;
//    m_array.insert(itPos, value);
//    if(m_IsMultiThreaded) {
//        mtx.lock();
//    }
    lockPtr->lock();
    auto itPos = m_array.begin() + pos;
    m_array.insert(itPos, value);
    lockPtr->unlock();
}

template <typename T>
T Array<T>::get(int pos) {
    return m_array[pos];
}

template <typename T>
size_t Array<T>::size() {
    return m_array.size();
    
}


#endif /* Array2_hpp */
