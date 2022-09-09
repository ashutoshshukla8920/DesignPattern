//
//  TimeFormatter.hpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#ifndef TimeFormatter_hpp
#define TimeFormatter_hpp

#include <iostream>
#include "Formatter.hpp"

class TimeFormatter : public Formatter {
public:
    std::string Format(const std::string& message) override;
};

#endif /* TimeFormatter_hpp */
