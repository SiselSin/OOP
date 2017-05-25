#pragma once
class A
{
	int a = 0;
public:
	//A() = delete;// отключает создание конструктора по умолчанию
	//A() = default;// создание конструктора по умолчанию
	A& operator=(A&) = delete;
	A(int a) : a(a)
	{

	};
};

class Logger
{
private:
	static Logger* g_instance;
	Logger() = default;
public:
	void log(char const*);
	
	Logger(Logger const&) = delete;
	Logger& operator = (Logger&) = delete;

	static Logger* GetInstance();
};
