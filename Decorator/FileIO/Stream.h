//
//  Stream.h
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef Stream_h
#define Stream_h
#include <iostream>
class Stream {
public:
    virtual void Write(std::string s) = 0;
    virtual void Read() = 0;
};

#endif /* Stream_h */
