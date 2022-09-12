#include "Array.h"


void UsingProtectionProxy() {
	ConcurrentArray<int> arr;
	std::thread t1{ [&arr]() {
	   for (int i = 0; i < 5; ++i) {
		   arr.add(i);
	   }
	} };
	std::thread t2{ [&arr]() {
	   for (int i = 0; i < 5; ++i) {
		   arr.add(i);
	   }
	} };

	t1.join();
	t2.join();
}

class DataBase {
public:
	virtual void WriteRecord() = 0;
	virtual void Query() = 0;
};

class SqlDb :public DataBase {
public:
	SqlDb(const std::string &dbName) {
		std::cout << "[SQL] Connection opened to database\n";
	}
	void WriteRecord() {
		std::cout << "[SQL] Writing records\n";
	}
	void Query() {
		std::cout << "[SQL] Returning records\n";
	}
};
//Virtual proxy
class SqlDbLazy :public DataBase {
	std::unique_ptr<SqlDb> m_pDb{};
	std::string m_DbName{};
	void Create() {
		if (!m_pDb) {
			m_pDb.reset(new SqlDb{ m_DbName });
		}
	}
public:
	SqlDbLazy(const std::string &dbName) :m_DbName{ dbName } {
	}
	void WriteRecord() {
		Create();
		m_pDb->WriteRecord();
	}
	void Query() {
		Create();
		m_pDb->Query();
	}
};

void Operate(DataBase *db) {
	db->Query();
}

int main() {
	srand(time(nullptr));
	SqlDbLazy db{"employees"};

	if (0 == (rand() % 2)) {
		db.WriteRecord();
		Operate(&db);
	}



	std::cout << "Rest of the code\n";
	



}