//
//  ThreadFormatter.hpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef ThreadFormatter_hpp
#define ThreadFormatter_hpp
#include <iostream>
#include "Formatter.hpp"

class ThreadFormatter : public Formatter{
public:
    std::string Format(const std::string& message) override;
};

#endif /* ThreadFormatter_hpp */
