//
//  Logger.hpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//

#ifndef Logger_hpp
#define Logger_hpp

#pragma once
#include <string>

class Logger {
    FILE *m_Fp{} ;
    int m_Level{} ;
    std::string m_Tag{};
    //step2: now we are marking logger constructor as private
    // and making static logger instance
    Logger();
    static Logger m_logger;
public:
    static Logger& GetInstance();
    void Log(const std::string &message) ;
    void SetLevel(int level) ;
    void SetTag(std::string tag) ;
    ~Logger() ;
};


#endif /* Logger_hpp */
