//
//  BaseSingleton.h
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef BaseSingleton_h
#define BaseSingleton_h

template<typename T>
class BaseSingleton {
protected:
    BaseSingleton() = default;
public:
    BaseSingleton(const BaseSingleton &) = delete;
    BaseSingleton &operator=(const BaseSingleton &) = delete;
    static T *GetInstance() {
        static T instance;
        return &instance;
    }
};

#define MAKE_SINGLETON(class_name)\
private : class_name() = default; \
friend class BaseSingleton<class_name> ;

#endif /* BaseSingleton_h */
