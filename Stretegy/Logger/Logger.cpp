//
//  Logger.cpp
//  Singleton Early
//
//  Created by Ashutosh Shukla on 06/09/22.
//

#define _CRT_SECURE_NO_WARNINGS
#include "Logger.hpp"
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

//Logger Logger::m_logger{}; // removed because of inline usage
std::mutex mutex;
std::once_flag flag;
Logger& Logger::GetInstance() {
   // To improve performace we can have double check
   
//    if(m_logger == nullptr) { // read outside critical section
//        mutex.lock();
//        if(m_logger == nullptr) {
//            m_logger = new Logger(); // modified inside critical section, this is mutiple instruction
//        }
//    }
//    mutex.unlock();
//    return *m_logger;
//    std::call_once(flag, [] () {
//        m_logger =  new Logger();
//    });
//    return *m_logger;
    // Mayer's singleton from c++11 static is thread safe
    static Logger instance;
    return instance;
}

Logger::Logger() {
    std::cout << "Logger()\n";
    m_Fp = fopen("/Users/asshukla/DesignPattern/Stretegy/Logger/log.txt", "w");
    // 1. solution for leaky singleton
    std::atexit([]() {
        delete m_logger;
    });
}

void Logger::Log(const std::string& message) {
    fprintf(m_Fp, "[%d][%s]%s\n", m_Level, m_Tag.c_str(), message.c_str());
    fflush(m_Fp);
}

// we want to write threadId when we are writing logs
// also want to display current time in somecases
// also now we want to display time
void Logger::Log(const std::string& message, int type) {
    if(type == 0) {
        fprintf(m_Fp, "[%d][%s]%s\n", m_Level, m_Tag.c_str(), message.c_str());
    }
    else if(type == 1){
        fprintf(m_Fp, "<%d>[%d][%s]%s\n", std::this_thread::get_id(), m_Level, m_Tag.c_str(), message.c_str());
    } else if(type == 2) {
        time_t t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        fprintf(m_Fp, "<%s>[%d][%s]%s\n", ctime(&t), m_Level, m_Tag.c_str(), message.c_str());
    }
    
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



