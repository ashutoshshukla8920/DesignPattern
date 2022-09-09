//
//  TimeFormatter.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#include "TimeFormatter.hpp"

#include <sstream>
#include <chrono>

std::string TimeFormatter::Format(const std::string& message) {
    std::ostringstream str;
    time_t t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    str<< '<' << ctime(&t) << '>' << message;
    return str.str();
}
