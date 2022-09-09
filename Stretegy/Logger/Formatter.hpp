//
//  Formatter.hpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef Formatter_hpp
#define Formatter_hpp

#include <iostream>

class Formatter {
public:
    virtual std::string Format(const std::string& message) = 0;
};

#endif /* Formatter_hpp */
