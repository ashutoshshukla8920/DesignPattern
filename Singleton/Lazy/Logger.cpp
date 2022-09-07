//
//  Logger.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//

#define _CRT_SECURE_NO_WARNINGS
#include "Logger.hpp"
#include <iostream>

//Logger Logger::m_logger{}; // removed because of inline usage

Logger& Logger::GetInstance() {
    if(m_logger == nullptr) {
        m_logger = new Logger();
    }
    return *m_logger;
}

Logger::Logger() {
    std::cout << "Logger()\n";
    m_Fp = fopen("log.txt", "w");

}

void Logger::Log(const std::string& message) {
    fprintf(m_Fp, "[%d][%s]%s\n", m_Level, m_Tag.c_str(), message.c_str());
    fflush(m_Fp);
}

void Logger::SetLevel(int level) {
    m_Level = level;
}

void Logger::SetTag(std::string tag) {
    m_Tag = std::move(tag);
}

Logger::~Logger() {
    fclose(m_Fp);
    std::cout << "~Logger()\n";
}



