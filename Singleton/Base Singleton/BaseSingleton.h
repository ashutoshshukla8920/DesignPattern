//
//  BaseSingleton.h
//  BaseSingleton
//
//  Created by Ashutosh Shukla on 07/09/22.
//

#ifndef BaseSingleton_h
#define BaseSingleton_h

template <typename T>
class BaseSingleton {
protected:
    BaseSingleton() = default;
public:
    BaseSingleton(const BaseSingleton&) = delete;
    BaseSingleton &operator = (const BaseSingleton&) = delete;
    static T &GetInstance() {
        static T instance;
        return instance;
    }
};

#endif /* BaseSingleton_h */
