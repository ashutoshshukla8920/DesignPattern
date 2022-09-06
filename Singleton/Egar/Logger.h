#pragma once
#include <string>

class Logger {
	FILE *m_Fp{} ;
	int m_Level{} ;
	std::string m_Tag{} ;
	// egar initilazation
	//static Logger m_logger;
	// eagar initilization
	inline static Logger* m_Logger{};
public:
	void Log(const std::string &message) ;
	void SetLevel(int level) ;
	void SetTag(std::string tag) ;
	~Logger() ;

	// static Logger& getLoggerInstance();
	static Logger* getLoggerInstance();
	Logger(const Logger&) = delete;
	Logger & operator=(const Logger&) = delete;
private:
	Logger();
};
