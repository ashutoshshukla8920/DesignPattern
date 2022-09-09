//
//  ThreadFormatter.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#include "ThreadFormatter.hpp"
#include <thread>
#include <sstream>

std::string ThreadFormatter::Format(const std::string& message) {
    std::ostringstream str;
    str << '<' <<std::this_thread::get_id() << '>' << message;
    return str.str();
}
