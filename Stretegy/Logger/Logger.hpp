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
#include "Formatter.hpp"


class Logger {
    FILE *m_Fp{} ;
    int m_Level{} ;
    std::string m_Tag{};
    //step2: now we are marking logger constructor as private
    // and making static logger instance
    Logger();
    //egar instantiation
    // static Logger m_logger;
    // Lazy instantiation
    inline static Logger* m_logger{}; // c++17
    //ThreadFormatter fmt{};
    Formatter *m_pFormatter{};
    
public:
    static Logger& GetInstance();
    void SetFormatter(Formatter *p);
    void Log(const std::string &message) ;
    void Log(const std::string &message, int type) ;
    void SetLevel(int level) ;
    void SetTag(std::string tag) ;
    // to remove 3 destructor call remove copy constructor and assignment
    Logger(const Logger&) = delete;
    Logger& operator = (const Logger&) = delete;
    ~Logger() ;
};


#endif /* Logger_hpp */
